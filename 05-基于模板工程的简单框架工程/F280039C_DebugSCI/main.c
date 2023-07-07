#include "F28x_Project.h"
#include "device.h"
#include "math.h"

#include "bsp_debugSCI.h"

#define GPIO_PIN_LED1        20U  // GPIO number for LD4
#define GPIO_PIN_LED2        22U  // GPIO number for LD5

void d()
{
    // Turn on LED
    // 硬件电路设计是GPIO输出低电平时LED亮
    GPIO_writePin(GPIO_PIN_LED1, 0);

    // 延迟0.5s Delay for a bit.
    DEVICE_DELAY_US(500000);

    // Turn off LED
    GPIO_writePin(GPIO_PIN_LED1, 1);

    // Delay for a bit.
    DEVICE_DELAY_US(500000);
}

void main(void)
{
    // 初始化时钟和外设 Initialize device clock and peripherals
    Device_init();
    // InitSysCtrl();  //本工程不能使用寄存器的InitSysCtrl();函数初始化。

    //库函数版配置
    // 初始化GPIO并设置为推挽输出 Initialize GPIO and configure the GPIO pin as a push-pull output
    Device_initGPIO();
    GPIO_setPadConfig(GPIO_PIN_LED1, GPIO_PIN_TYPE_STD);  // Push-pull output or floating input
    GPIO_setDirectionMode(GPIO_PIN_LED1, GPIO_DIR_MODE_OUT);

/*    InitGpio();  //寄存器指令配置
    GPIO_SetupPinMux(GPIO_PIN_LED1, GPIO_MUX_CPU1, 0);
    GPIO_SetupPinOptions(GPIO_PIN_LED1, GPIO_OUTPUT, GPIO_PUSHPULL);*/

    EALLOW;



    // 初始化PIE并清空PIE寄存器，关闭CPU中断
    // Initialize PIE and clear PIE registers. Disables CPU interrupts.
    Interrupt_initModule();

    // 初始化PIE向量表
    // Initialize the PIE vector table with pointers to the shell Interrupt
    // Service Routines (ISR).
    Interrupt_initVectorTable();

    // Enable Global Interrupt (INTM) and realtime interrupt (DBGM)
    EINT;
    ERTM;

    float a=cos((float)3.1415926/4);  // FPU32
    float b=__sin((float)(3.14/4));   // TMU

    bsp_DebugSCI_init();
    for(;;)
    {
        d();
        putchar('c');
    }
}


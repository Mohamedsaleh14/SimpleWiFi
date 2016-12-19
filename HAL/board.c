/*
 * board.c
 *
 *  Created on: Oct 23, 2016
 *      Author: saleh
 */
#include <stdint.h>
#include "board.h"
#include "TIMD.h"
#include "../simplelink/include/simplelink.h"
#include "../cmsis/LM4F120H5QR.h"
#include "../cmsis/core_cm4.h"

P_EVENT_HANDLER        pIrqEventHandler = 0;
uint8_t IntIsMasked;
int SlStudio_RegisterInterruptHandler(P_EVENT_HANDLER InterruptHdl , void* pValue)
{
    pIrqEventHandler = InterruptHdl;

    return 0;
}

/*!
    \brief          GPIOB interrupt handler

    \param[in]      none

    \return         none

    \note

    \warning
*/
void GPIOB_intHandler(void)
{

}

/*!
    \brief             Enables the CC3100

    \param[in]         none

    \return            none

    \note

    \warning
*/
void CC3100_enable(void)
{
	GPIOE->DATA |= (1<<4);
}

/*!
    \brief             Disables the CC3100

    \param[in]         none

    \return            none

    \note

    \warning
*/
void CC3100_disable(void)
{
	GPIOE->DATA &= ~(1<<4);
}

/*!
    \brief          Enables the interrupt from the CC3100

    \param[in]      none

    \return         none

    \note

    \warning
*/
void CC3100_InterruptEnable(void)
{
	NVIC_EnableIRQ(GPIOB_IRQn);
}

/*!
    \brief          Disables the interrupt from the CC3100

    \param[in]      none

    \return         none

    \note

    \warning
*/
void CC3100_InterruptDisable(void)
{
	NVIC_DisableIRQ(GPIOB_IRQn);
}

/*!
    \brief          Stops the Watch Dog timer

    \param[in]      none

    \return         none

    \note

    \warning
*/
void stopWDT(void)
{

}

/*!
    \brief          Initialize the system clock of MCU

    \param[in]      none

    \return         none

    \note

    \warning
*/
void initClk(void)
{
	SCB->CPACR |= 0x00F00000;
	FPU->FPCCR |=  FPU_FPCCR_ASPEN_Msk|FPU_FPCCR_LSPEN_Msk;
}

/*!
    \brief      Masks the Host IRQ

	\param[in]      none

    \return         none

    \warning
*/
void MaskIntHdlr(void)
{
	IntIsMasked = TRUE;
}

/*!
    \brief     Unmasks the Host IRQ

	\param[in]      none

    \return         none

    \warning
*/
void UnMaskIntHdlr(void)
{
	IntIsMasked = FALSE;
}

/*!
    \brief          GPIOB interrupt handler

    \param[in]      none

    \return         none

    \note

    \warning
*/
void UART1_intHandler(void)
{

}

/*!
    \brief     Produce delay in ms

    \param[in]         interval - Time in ms

    \return            none

    \note

    \warning
*/
void Delay(unsigned long interval)
{
	TIMD_WaitTimerA(interval/1000);
}



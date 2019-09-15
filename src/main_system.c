/*-------------------------------------------------------------------------*
 * File:  main_system.c
 *-------------------------------------------------------------------------*
 * Description:
 */
/**
 *    @addtogroup main_system
 *  @{
 *  @brief     TODO: Description
 *
 * @par Example code:
 * TODO: Description of overall example code
 * @par
 * @code
 * TODO: Insert example code
 * @endcode
 */
/*-------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------
 * Created by: Alex Grutter
 *--------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------*
 * Includes:
 *-------------------------------------------------------------------------*/
#include <main_system.h>

/*-------------------------------------------------------------------------*
 * Constants:
 *-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------*
 * Types:
 *-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------*
 * Globals:
 *-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------*
 * Prototypes:
 *-------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*
 * Function: adc_callback
 *---------------------------------------------------------------------------*/
/** TODO: Description of Function
 *
 *  @param [in] p_args      Pointer to arguments provided by SSP
 *  @par Example Code:
 *  @code
 *  //TODO: provide example or remove if not needed
 *  @endcode
 */
/*---------------------------------------------------------------------------*/
/* ADC Callback */
void adc_callback(adc_callback_args_t *p_args)
{
    switch (p_args->event)
    {
        case ADC_EVENT_SCAN_COMPLETE:
            /* TODO: Add response to ADC scan complete here */
        break;

        case ADC_EVENT_SCAN_COMPLETE_GROUP_B:
            /* TODO: Add response to ADC scan complete for group B here (if used) */
        break;

        default:
        break;
    }
}

/*-------------------------------------------------------------------------*
 * End of File:  main_system.c
 *-------------------------------------------------------------------------*/
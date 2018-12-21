/*-------------------------------------------------------------------------*
 * File:  accelerometer.h
 *-------------------------------------------------------------------------*
 * Description:
 */
 /**
 *  @file   accelerometer
 *  @brief  TODO: Short description
 *
 *  TODO: Description of file
 */
/*-------------------------------------------------------------------------*/
#ifndef ACCELEROMETER_H_
#define ACCELEROMETER_H_

/*--------------------------------------------------------------------------
 * Created by: Alex Grutter
 *--------------------------------------------------------------------------
 *
 *-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------*
 * Includes:
 *-------------------------------------------------------------------------*/
#include <accelerometer_thread.h>
#include <marsgro_system.h>

/*-------------------------------------------------------------------------*
 * Constants:
 *-------------------------------------------------------------------------*/
#define SCI_SPI8_EVENT_TRANSFER_COMPLETE    (1 << 0)
#define SCI_SPI8_EVENT_TRANSFER_ABORTED     (1 << 1)
#define SCI_SPI8_EVENT_ERR_MODE_FAULT       (1 << 2)
#define SCI_SPI8_EVENT_ERR_READ_OVERFLOW    (1 << 3)
#define SCI_SPI8_EVENT_ERR_PARITY           (1 << 4)
#define SCI_SPI8_EVENT_ERR_OVERRUN          (1 << 5)
#define SCI_SPI8_EVENT_ERR_FRAMING          (1 << 6)
#define SCI_SPI8_EVENT_ERR_MODE_UNDERRUN    (1 << 7)

/*-------------------------------------------------------------------------*
 * Types:
 *-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------*
 * Prototypes:
 *-------------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif // ACCELEROMETER_H_
/*-------------------------------------------------------------------------*
 * End of File:  accelerometer.h
 *-------------------------------------------------------------------------*/

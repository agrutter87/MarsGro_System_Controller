/*-------------------------------------------------------------------------*
 * File:  gui.h
 *-------------------------------------------------------------------------*
 * Description:
 */
 /**
 *  @file   gui
 *  @brief  TODO: Short description
 *
 *  TODO: Description of file
 */
/*-------------------------------------------------------------------------*/
#ifndef GUI_H_
#define GUI_H_

/*--------------------------------------------------------------------------
 * Created by: Alex Grutter
 *--------------------------------------------------------------------------
 *
 *-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------*
 * Includes:
 *-------------------------------------------------------------------------*/
#include <gui_thread.h>
#include <guix_gen/guix_resources.h>
#include <guix_gen/guix_specifications.h>
#include <main_system.h>

#if defined(BSP_BOARD_S7G2_SK)
#include <lcd/ILI9341V/lcd.h>
#endif

/*-------------------------------------------------------------------------*
 * Constants:
 *-------------------------------------------------------------------------*/
extern GX_WINDOW_ROOT * p_window_root;
extern GX_CONST GX_STUDIO_WIDGET *guix_widget_table[];

/*-------------------------------------------------------------------------*
 * Types:
 *-------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------*
 * Prototypes:
 *-------------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif /* GUI_H_ */
/*-------------------------------------------------------------------------*
 * End of File:  gui.h
 *-------------------------------------------------------------------------*/

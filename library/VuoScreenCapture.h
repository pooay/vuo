/**
 * @file
 * VuoScreenCapture interface.
 *
 * @copyright Copyright © 2012–2016 Kosada Incorporated.
 * This code may be modified and distributed under the terms of the MIT License.
 * For more information, see http://vuo.org/license.
 */

/**
 * Manages capturing from a display.
 */
typedef void *VuoScreenCapture;

VuoScreenCapture VuoScreenCapture_make(VuoScreen screen, VuoRectangle rectangle, void (*capturedImage)(VuoImage image));

/**
 * @file
 * VuoInputEditorArtNetInputDevice interface.
 *
 * @copyright Copyright © 2012–2016 Kosada Incorporated.
 * This code may be modified and distributed under the terms of the MIT License.
 * For more information, see http://vuo.org/license.
 */

#pragma once

#include "VuoInputEditorWithMenu.hh"

/**
 * A VuoInputEditorArtNetInputDevice factory.
 */
class VuoInputEditorArtNetInputDeviceFactory : public VuoInputEditorFactory
{
   Q_OBJECT
   Q_PLUGIN_METADATA(IID "org.vuo.inputEditor" FILE "VuoInputEditorArtNetInputDevice.json")
   Q_INTERFACES(VuoInputEditorFactory)

public:
   virtual VuoInputEditor * newInputEditor(void);
};

/**
 * An input editor that displays a menu of VuoArtNetInputDevice values.
 */
class VuoInputEditorArtNetInputDevice : public VuoInputEditorWithMenu
{
	Q_OBJECT

public:
	VuoInputEditorMenuItem * setUpMenuTree();
};

/**
 * @file
 * vuo.test.retainNull node implementation.
 *
 * @copyright Copyright © 2012–2016 Kosada Incorporated.
 * This code may be modified and distributed under the terms of the GNU Lesser General Public License (LGPL) version 2 or later.
 * For more information, see http://vuo.org/license.
 */

#include "node.h"

VuoModuleMetadata({
					 "title" : "Retain Null",
					 "description" : "",
					 "version" : "1.0.0",
					 "node": {
						 "isInterface" : false
					 }
				 });

void nodeEvent
(
		VuoOutputData(VuoInteger) outEvent
)
{
	VuoRetain(0);
	*outEvent = 0;
}

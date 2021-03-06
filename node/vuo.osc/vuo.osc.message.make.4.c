/**
 * @file
 * vuo.osc.message.make.4 node implementation.
 *
 * @copyright Copyright © 2012–2016 Kosada Incorporated.
 * This code may be modified and distributed under the terms of the MIT License.
 * For more information, see http://vuo.org/license.
 */

#include "node.h"
#include "VuoOscMessage.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"
#include <json-c/json.h>
#pragma clang diagnostic pop

VuoModuleMetadata({
					 "title" : "Make Message",
					 "keywords" : [ ],
					 "version" : "1.0.0",
					 "genericTypes": {
						 "VuoGenericType0" : {
							 "defaultType" : "VuoReal",
							 "compatibleTypes": [ "VuoBoolean", "VuoInteger", "VuoReal", "VuoText" ]
						 },
						 "VuoGenericType1" : {
							 "defaultType" : "VuoReal",
							 "compatibleTypes": [ "VuoBoolean", "VuoInteger", "VuoReal", "VuoText" ]
						 },
						 "VuoGenericType2" : {
							 "defaultType" : "VuoReal",
							 "compatibleTypes": [ "VuoBoolean", "VuoInteger", "VuoReal", "VuoText" ]
						 },
						 "VuoGenericType3" : {
							 "defaultType" : "VuoReal",
							 "compatibleTypes": [ "VuoBoolean", "VuoInteger", "VuoReal", "VuoText" ]
						 }
					 },
					 "node": {
						 "exampleCompositions": [ ]
					 }
				 });

void nodeEvent
(
		VuoInputData(VuoText, {"default":"/example"}) address,
		VuoInputData(VuoGenericType0) data1,
		VuoInputData(VuoGenericType1) data2,
		VuoInputData(VuoGenericType2) data3,
		VuoInputData(VuoGenericType3) data4,
		VuoOutputData(VuoOscMessage) message
)
{
	if (!address)
		return;

	struct json_object *data = json_object_new_array();
	json_object_array_put_idx(data, 0, VuoGenericType0_getJson(data1));
	json_object_array_put_idx(data, 1, VuoGenericType1_getJson(data2));
	json_object_array_put_idx(data, 2, VuoGenericType2_getJson(data3));
	json_object_array_put_idx(data, 3, VuoGenericType3_getJson(data4));

	*message = VuoOscMessage_make(address, data);
}

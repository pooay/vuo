/**
 * @file
 * vuo.time.equal.dateTime node implementation.
 *
 * @copyright Copyright © 2012–2016 Kosada Incorporated.
 * This code may be modified and distributed under the terms of the MIT License.
 * For more information, see http://vuo.org/license.
 */

#include "node.h"
#include "VuoTime.h"
#include "VuoTimeUnit.h"

VuoModuleMetadata({
					  "title" : "Are Times-of-Day Equal",
					  "keywords" : [ ],
					  "version" : "1.0.0",
					  "dependencies" : [ ],
					  "node" : {
						  "exampleCompositions" : [ ]
					  }
				  });

void nodeEvent
(
	VuoInputData(VuoList_VuoTime) times,
	VuoInputData(VuoReal, {"default":1}) tolerance,
	VuoInputData(VuoTimeUnit, {"default":"second",
							   "includeValues": ['hour', 'half-hour', 'quarter-hour', 'minute', 'second']
							  }) toleranceUnit,
	VuoOutputData(VuoBoolean) equal
)
{
	*equal = VuoTime_areTimesOfDayEqualWithinTolerance(times, tolerance, toleranceUnit);
}

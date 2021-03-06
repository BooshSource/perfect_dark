#include <ultra64.h>
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "game/game_0969d0.h"
#include "gvars/gvars.h"
#include "lib/lib_4a360.h"
#include "types.h"

f32 func0f096750(f32 x, f32 z)
{
	f32 result;

	if (x == 0) {
		if (z >= 0) {
			result = 0;
		} else {
			result = M_PI;
		}
	} else if (z == 0) {
		if (x > 0) {
			result = 1.5707963705063f;
		} else {
			result = 1.5707963705063f * 3;
		}
	} else {
		result = sqrtf(x * x + z * z);

		if (z < x) {
			result = func0f0969d0(z / result);

			if (x < 0) {
				result = M_TAU - result;
			}
		} else {
			result = func0f0969d0(x / result);
			result = 1.5707963705063f - result;

			if (z < 0) {
				result = M_PI - result;
			}

			if (result < 0) {
				result = result + M_TAU;
			}
		}
	}

	return result;
}

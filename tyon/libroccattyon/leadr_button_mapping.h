#ifndef __ROCCAT_LEADR_BUTTON_MAPPING_H__
#define __ROCCAT_LEADR_BUTTON_MAPPING_H__

/*
 * Button mapping for Roccat Leadr
 * Maps Tyon button indices to actual Leadr physical button positions
 */

/*
 * Leadr button remapping array
 * leadr_button_map[tyon_index] = leadr_physical_index
 *
 * Change these values based on your testing:
 * - If configuring GUI button X actually controls physical button Y,
 *   then set leadr_button_map[X] = Y
 */
static const guint leadr_button_map[16] = {
	0,  // TYON_BUTTON_INDEX_LEFT (0) -> correct
	1,  // TYON_BUTTON_INDEX_RIGHT (1) -> correct
	2,  // TYON_BUTTON_INDEX_MIDDLE (2) -> correct
	3,  // TYON_BUTTON_INDEX_THUMB_BACK (3) -> correct
	11, // TYON_BUTTON_INDEX_THUMB_FORWARD (4) -> swap with wheel_down
	13, // TYON_BUTTON_INDEX_THUMB_PEDAL (5) -> correct
	14, // TYON_BUTTON_INDEX_THUMB_PADDLE_UP (6) -> correct
	4,  // TYON_BUTTON_INDEX_THUMB_PADDLE_DOWN (7) -> swap with wheel_down (4)
	8,  // TYON_BUTTON_INDEX_LEFT_BACK (8) -> correct
	5,  // TYON_BUTTON_INDEX_LEFT_FORWARD (9) -> maps to physical 5
	10, // TYON_BUTTON_INDEX_RIGHT_BACK (10) -> correct
	7,  // TYON_BUTTON_INDEX_RIGHT_FORWARD (11) -> correct
	12, // TYON_BUTTON_INDEX_FIN_RIGHT (12) -> correct
	9,  // TYON_BUTTON_INDEX_FIN_LEFT (13) -> correct
	6,  // TYON_BUTTON_INDEX_WHEEL_UP (14) -> swap with thumb_paddle_up (6)
	15, // TYON_BUTTON_INDEX_WHEEL_DOWN (15) -> swap with thumb_forward
};

/* Inverse mapping: leadr_physical_index -> tyon_index */
static const guint leadr_button_map_inverse[16] = {
	0,  // Physical button 0 -> Tyon index 0 (LEFT)
	1,  // Physical button 1 -> Tyon index 1 (RIGHT)
	2,  // Physical button 2 -> Tyon index 2 (MIDDLE)
	3,  // Physical button 3 -> Tyon index 3 (THUMB_BACK)
	7,  // Physical button 4 -> Tyon index 7 (THUMB_PADDLE_DOWN)
	9,  // Physical button 5 -> Tyon index 9 (LEFT_FORWARD)
	14, // Physical button 6 -> Tyon index 14 (WHEEL_UP)
	11, // Physical button 7 -> Tyon index 11 (RIGHT_FORWARD)
	8,  // Physical button 8 -> Tyon index 8 (LEFT_BACK)
	13, // Physical button 9 -> Tyon index 13 (FIN_LEFT)
	10, // Physical button 10 -> Tyon index 10 (RIGHT_BACK)
	15, // Physical button 11 -> Tyon index 15 (WHEEL_DOWN)
	12, // Physical button 12 -> Tyon index 12 (FIN_RIGHT)
	5,  // Physical button 13 -> Tyon index 5 (THUMB_PEDAL)
	6,  // Physical button 14 -> Tyon index 6 (THUMB_PADDLE_UP)
	4,  // Physical button 15 -> Tyon index 4 (THUMB_FORWARD)
};

#endif
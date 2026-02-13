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
	0,  // TYON_BUTTON_INDEX_LEFT (0)
	1,  // TYON_BUTTON_INDEX_RIGHT (1)
	2,  // TYON_BUTTON_INDEX_MIDDLE (2)
	12, // TYON_BUTTON_INDEX_THUMB_BACK (3) -> switched with LEFT_BACK
	11, // TYON_BUTTON_INDEX_THUMB_FORWARD (4)
	13, // TYON_BUTTON_INDEX_THUMB_PEDAL (5)
	14, // TYON_BUTTON_INDEX_THUMB_PADDLE_UP (6)
	15, // TYON_BUTTON_INDEX_THUMB_PADDLE_DOWN (7)
	8,  // TYON_BUTTON_INDEX_LEFT_BACK (8) -> switched with THUMB_BACK
	5,  // TYON_BUTTON_INDEX_LEFT_FORWARD (9)
	6,  // TYON_BUTTON_INDEX_RIGHT_BACK (10)
	7,  // TYON_BUTTON_INDEX_RIGHT_FORWARD (11)
	10, // TYON_BUTTON_INDEX_FIN_RIGHT (12)
	9,  // TYON_BUTTON_INDEX_FIN_LEFT (13)
	3,  // TYON_BUTTON_INDEX_WHEEL_UP (14)
	4,  // TYON_BUTTON_INDEX_WHEEL_DOWN (15)
};

/* Inverse mapping: leadr_physical_index -> tyon_index */
static const guint leadr_button_map_inverse[16] = {
	0,  // Physical button 0 -> Tyon index 0 (LEFT)
	1,  // Physical button 1 -> Tyon index 1 (RIGHT)
	2,  // Physical button 2 -> Tyon index 2 (MIDDLE)
	14, // Physical button 3 -> Tyon index 14 (WHEEL_UP)
	15, // Physical button 4 -> Tyon index 15 (WHEEL_DOWN)
	9,  // Physical button 5 -> Tyon index 9 (LEFT_FORWARD)
	10, // Physical button 6 -> Tyon index 10 (RIGHT_BACK)
	11, // Physical button 7 -> Tyon index 11 (RIGHT_FORWARD)
	8,  // Physical button 8 -> Tyon index 8 (LEFT_BACK, switched)
	13, // Physical button 9 -> Tyon index 13 (FIN_LEFT)
	12, // Physical button 10 -> Tyon index 12 (FIN_RIGHT)
	4,  // Physical button 11 -> Tyon index 4 (THUMB_FORWARD)
	3,  // Physical button 12 -> Tyon index 3 (THUMB_BACK, switched)
	5,  // Physical button 13 -> Tyon index 5 (THUMB_PEDAL)
	6,  // Physical button 14 -> Tyon index 6 (THUMB_PADDLE_UP)
	7,  // Physical button 15 -> Tyon index 7 (THUMB_PADDLE_DOWN)
};

#endif

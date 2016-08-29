#define marker_off 31

static
int marker[37][57] =
  {
    /* hline */
    { 2, -1000, 0, 1000, 0, 0 },
    /* vline */
    { 2, 0, -1000, 0, 1000, 0 },
    /* star8 */
    { 4, 17,  0, -1000, 153, -370, 707, -707, 370, -153, 1000, 0, 370, 153,
      707, 707, 153, 370, 0, 1000, -153, 370, -707, 707, -370, 153, -1000, 0,
      -370, -153, -707, -707, -153, -370, 0, -1000, 0 },
    /* star7 */
    { 4, 15,  0, 1000, 174, 360, 782, 623, 390, 89, 975, -223, 313, -249,
      434, -901, 0, -400, -434, -901, -313, -249, -975, -223, -390, 89,
      -782, 623, -174, 360, 0, 1000, 0 },
    /* star6 */
    { 4, 13,  0, -1000, 200, -346, 866, -500, 400, 0, 866, 500, 200, 346, 0,
      1000, -200, 346, -866, 500, -400, 0, -866, -500, -200, -346,
      0, -1000, 0 },
    /* star5 */
    { 4, 11,  0, 1000, 235, 324, 951, 309, 380, -124, 588, -809, 0, -400,
      -588, -809, -380, -124, -951, 309, -235, 324, 0, 1000, 0 },
    /* star4 */
    { 4, 9,  0, -1000, 283, -283, 1000, 0, 283, 283, 0, 1000, -283, 283,
      -1000, 0, -283, -283, 0, -1000, 0 },
    /* octagon */
    { 4, 8,  0, -1000, 707, -707, 1000, 0, 707, 707, 0, 1000, -707, 707,
      -1000, 0, -707, -707, 0 },
    /* heptagon */
    { 4, 7,  0, 1000, 782, 623, 975, -223, 434, -901, -434, -901,
      -975, -223, -782, 623, 0 },
    /* hexagon */
    { 4, 6,  0, -1000, 866, -500, 866, 500, 0, 1000, -866, 500, -866, -500,
      0 },
    /* pentagon */
    { 4, 5,  0, 1000, 951, 309, 588, -809, -588, -809, -951, 309, 0 },
    /* omark */
    { 5, 9, -400, 700, 400, 700, 700, 400, 700, -400, 400, -700, -400, -700,
      -700, -400, -700, 400, -400, 700,
      3, 9, -400, 700, 400, 700, 700, 400, 700, -400, 400, -700, -400, -700,
      -700, -400, -700, 400, -400, 700, 0 },
    /* hollow plus */
    { 5, 13, -200, 800, 200, 800, 200, 200, 800, 200, 800, -200, 200, -200,
      200, -800, -200, -800, -200, -200, -800, -200, -800, 200, -200, 200,
      -200, 800,
      3, 13, -200, 800, 200, 800, 200, 200, 800, 200, 800, -200, 200, -200,
      200, -800, -200, -800, -200, -200, -800, -200, -800, 200, -200, 200,
      -200, 800, 0 },
    /* solid triangle right */
    { 4, 4, -800, 0, 400, 700, 400, -700, -800, 0, 0 },
    /* solid triangle left */
    { 4, 4, 800, 0, -400, -700, -400, 700, 800, 0, 0 },
    /* triangle up down */
    { 5, 4, 0, 800, 700, -400, -700, -400, 0, 800,
      5, 4, 0, -800, -700, 400, 700, 400, 0, -800,
      3, 4, 0, 800, 700, -400, -700, -400, 0, 800,
      3, 4, 0, -800, -700, 400, 700, 400, 0, -800, 0 },
    /* solid star */
    { 4, 11, 0, 900, 200, 200, 900, 300, 300, -100, 600, -800, 0, -300,
      -600, -800, -300, -100, -900, 300, -200, 200, 0, 900, 0 },
    /* hollow star */
    { 5, 11, 0, 900, 200, 200, 900, 300, 300, -100, 600, -800, 0, -300,
      -600, -800, -300, -100, -900, 300, -200, 200, 0, 900,
      3, 11, 0, 900, 200, 200, 900, 300, 300, -100, 600, -800, 0, -300,
      -600, -800, -300, -100, -900, 300, -200, 200, 0, 900, 0 },
    /* solid diamond */
    { 4, 5, 0, 1000, 1000, 0, 0, -1000, -1000, 0, 0, 1000, 0},
    /* hollow diamond */
    { 5, 5, 0, 1000, 1000, 0, 0, -1000, -1000, 0, 0, 1000,
      3, 5, 0, 1000, 1000, 0, 0, -1000, -1000, 0, 0, 1000, 0 },
    /* solid hourglass */
    { 4, 5, 1000, 1000, -1000, -1000, 1000, -1000, -1000, 1000, 1000, 1000, 0 },
    /* hollow hourglass */
    { 5, 5, 1000, 1000, -1000, -1000, 1000, -1000, -1000, 1000, 1000, 1000,
      3, 5, 1000, 1000, -1000, -1000, 1000, -1000, -1000, 1000, 1000, 1000, 0 },
    /* solid bowtie */
    { 4, 5, 1000, 1000, 1000, -1000, -1000, 1000, -1000, -1000, 1000, 1000, 0 },
    /* hollow bowtie */
    { 5, 5, 1000, 1000, 1000, -1000, -1000, 1000, -1000, -1000, 1000, 1000,
      3, 5, 1000, 1000, 1000, -1000, -1000, 1000, -1000, -1000, 1000, 1000, 0 },
    /* solid square */
    { 4, 5, 1000, 1000, 1000, -1000, -1000, -1000, -1000, 1000, 1000, 1000, 0 },
    /* hollow square */
    { 5, 5, 1000, 1000, 1000, -1000, -1000, -1000, -1000, 1000, 1000, 1000,
      3, 5, 1000, 1000, 1000, -1000, -1000, -1000, -1000, 1000, 1000, 1000, 0 },
    /* solid triangle down */
    { 4, 4, -1000, 1000, 1000, 1000, 0, -1000, -1000, 1000, 0 },
    /* hollow triangle down */
    { 5, 4, -1000, 1000, 1000, 1000, 0, -1000, -1000, 1000,
      3, 4, -1000, 1000, 1000, 1000, 0, -1000, -1000, 1000, 0 },
    /* solid triangle up */
    { 4, 4, 0, 1000, 1000, -1000, -1000, -1000, 0, 1000, 0 },
    /* hollow triangle up */
    { 5, 4, 0, 1000, 1000, -1000, -1000, -1000, 0, 1000,
      3, 4, 0, 1000, 1000, -1000, -1000, -1000, 0, 1000, 0 },
    /* solid circle */
    { 7, 0, 360, 0 },
    /* not used */
    { 0 },
    /* dot */
    { 1, 0 },
    /* plus */
    { 2, 0, 0, 0, 1000, 2, 0, 0, 1000, 0, 2, 0, 0, 0, -1000,
      2, 0, 0, -1000, 0, 0 },
    /* asterisk */
    { 2, 0, 0, 0, 1000, 2, 0, 0, 1000, 300,
      2, 0, 0, 600, -1000, 2, 0, 0, -600, -1000,
      2, 0, 0, -1000, 300, 0 },
    /* circle */
    { 8, 6, 0 },
    /* diagonal cross */
    { 2, 0, 0, 1000, 1000, 2, 0, 0, 1000, -1000,
      2, 0, 0, -1000, -1000, 2, 0, 0, -1000, 1000, 0 }
  };

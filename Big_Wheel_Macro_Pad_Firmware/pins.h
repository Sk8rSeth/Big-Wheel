// Defining encoder pins responsible for "rotating"
#define E1_S1 3
#define E1_S2 2
#define E2_S1 0
#define E2_S2 1
#define E3_S1 6
#define E3_S2 7
#define E4_S1 4
#define E4_S2 20

const byte allEncPins[] = { E1_S1, E1_S2, // TopRightEnc
                            E2_S1, E2_S2, // MiddleRightEnc
                            E3_S1, E3_S2, // BottomRightEnc
                            E4_S1, E4_S2  // WheelEnc
                          };

// To simplify wiring I got two columns and nine rows = 11 pins in total.
// But one column is gnd, so that's 10 pins for 18 buttons.
// Pro Micro is lacking pins comparing to Teensy.
// Look at wiring diagram for better understandig
#define button1_E4 7
#define button2_E3 6
#define button3_E2 5
#define button4_E1 2
#define button5_6 3
#define button7_8 21
#define button9_10 20
#define button11_12 19
#define button13_14 18
#define orangeLine A6


const byte allButtonRowPins[] = {button1_E4, button2_E3, button3_E2,
                                 button4_E1, button5_6, button7_8,
                                 button9_10, button11_12, button13_14
                                };

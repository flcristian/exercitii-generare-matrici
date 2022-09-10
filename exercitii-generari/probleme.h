#include "functii.h"

// VARIANTELE MATE-INFO:

// Completam :
// 
// for(i = 1; i <= 5; i++)
//    for(j = 1; j <= 5; j++)
//
// 2 3 4 0 1
// 3 4 0 1 2
// 4 0 1 2 3 
// 0 1 2 3 4
// 1 2 3 4 0

void varianta1(int x[100][100], int i, int j) {
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			x[i][j] = (i + j) % 5;
		}
	}
}

// Completam :
// 
// for(i = 1; i <= 5; i++)
//    for(j = 1; j <= 5; j++)
//
// 1 1 1 1 3
// 1 1 1 3 2
// 1 1 3 2 2 
// 1 3 2 2 2
// 3 2 2 2 2

void varianta2(int x[100][100], int i, int j) {
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			if (i + j == 6) {
				x[i][j] = 3;
			}
			else {
				if (i + j < 6) {
					x[i][j] = 1;
				}
				else {
					x[i][j] = 2;
				}
			}
		}
	}
}

// Completam :
// 
// for(i = 1; i <= 5; i++)
//    for(j = 1; j <= 5; j++)
//
// 1 1 1 1 1
// 1 2 3 4 5
// 1 3 6 0 5
// 1 4 0 0 5
// 1 5 5 5 0

void varianta4(int x[100][100], int i, int j) {
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			if (i > 1 && j > 1) {
				x[i][j] = (x[i - 1][j] + x[i][j - 1]) % 10;
			}
			else {
				x[i][j] = 1;
			}
		}
	}
}

// Completam :
//
// for(i = 1; i <= 5; i++)
//    for(j = 1; j <= 5; j++)
// 
// 0 1 1 1 0
// 4 0 1 0 2
// 4 4 0 2 2
// 4 0 3 0 2
// 0 3 3 3 0

void varianta5(int x[100][100], int i, int j) {
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			if (j > i && j < 6 - i) {
				x[i][j] = 1;
			}
			else {
				if (j < i && j < 6 - i) {
					x[i][j] = 4;
				}
				else {
					if (j > i && j > 6 - i) {
						x[i][j] = 2;
					}
					else {
						if (j < i && j > 6 - i) {
							x[i][j] = 3;
						}
						else {
							x[i][j] = 0;
						}
					}
				}
				
			}
		}
	}
}

// Completam :
// 
// for(i = 1; i <= 5; i++)
//    for(j = 1; j <= 5; j++)
// 
// 1 6 11 16 21
// 2 7 12 17 22
// 3 8 13 18 23
// 4 9 14 19 24
// 5 10 15 20 25

void varianta6(int x[100][100], int i, int j) {
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			x[i][j] = i + ((j - 1) * 5);
		}
	}
}

// Completam :
// 
// for(i = 1; i <= 5; i++)
//    for(j = 1; j <= 5; j++)
// 
// 1 2 3 4 5
// 10 9 8 7 6
// 11 12 13 14 15
// 20 19 18 17 16
// 21 22 23 24 25 

void varianta7(int x[100][100], int i, int j) {
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			if (i % 2 == 1) {
				x[i][j] = j + ((i / 2) * 10);
			}
			else {
				x[i][j] = ((i / 2) * 10) - j + 1;
			}
		}
	}
}

// Completam :
// 
// for(i = 0; i <= 5; i++)
//    for(j = 5; j >= 0; j--)
//
// 6 5 5 5 5 5
// 5 6 3 2 1 0
// 3 3 6 3 3 3
// 5 4 3 6 1 0
// 1 1 1 1 6 1
// 5 4 3 2 1 6

void varianta9(int x[100][100], int i, int j) {
	for (i = 0; i <= 5; i++) {
		for (j = 5; j >= 0; j--) {
			if (i == j) {
				x[i][j] = 6;
			}
			else {
				if (i % 2 == 0) {
					x[i][j] = 5 - i;
				}
				else {
					x[i][j] = 5 - j;
				}
			}
		}
	}
}

// Completam :
// 
// for(i = 0; i < 6; i++)
//    for(j = 0; j <= 2; j++)
// 
// 0 1 2 2 1 0
// 1 2 3 3 2 1
// 2 3 4 4 3 2
// 2 3 4 4 3 2
// 1 2 3 3 2 1
// 0 1 2 2 1 0

void varianta10(int x[100][100], int i, int j) {
	for (i = 0; i < 6; i++) {
		for (j = 0; j <= 2; j++) {
			if (i < 3) {
				x[i][j] = i + j;
				x[i][5 - j] = i + j;
			}
			else {
				x[i][j] = (5 - i) + j;
				x[i][5 - j] = (5 - i) + j;
			}
		}
	}
}

// Completam :
//
// for(i = 1; i <= 6; i++)
//    for(j = 1; j <= 6; j++)
// 
// 2 3 1 2 3 1
// 3 6 2 3 6 2
// 1 2 0 1 2 0
// 2 3 1 2 3 1
// 3 6 2 3 6 2
// 1 2 0 1 2 0

void varianta12(int x[100][100], int i, int j) {
	for (i = 1; i <= 6; i++) {
		for (j = 1; j <= 6; j++) {
			if (i % 3 == 1) {
				x[i][j] = (i % 3) + (j % 3);
			}
			else {
				if (i % 3 == 2) {
					x[i][j] = x[i - 1][j] * 2 - (j % 3 % 2);
				}
				else {
					x[i][j] = x[i - 2][j] - 1;
				}
			}
		}
	}
}

// Completam :
//
// for(i = 5; i >= 1; i--)
//    for(j = 1; j < 6; j++)
// 
// 5 1 1 1 2
// 5 2 0 0 1
// 5 1 2 0 1
// 5 2 1 2 1
// 5 5 5 5 5

void varianta13(int x[100][100], int i, int j) {
	for (i = 5; i >= 1; i--) {
		for (j = 1; j < 6; j++) {
			if (i == 5 || j == 1) {
				x[i][j] = 5;
			}
			else {
				if ((i + j) % 2 == 0) {
					x[i][j] = (x[i][j - 1] + x[i + 1][j]) % 4;
				}
				else {
					x[i][j] = (x[i][j - 1] + x[i + 1][j]) % 4 % 2; 
				}
			}
		}
	}
}

// Completam :
//
// for(i = 0; i <= 6; i++)
//    for(j = 0; j <= 6; j++)
//
// * - - - - - *
// * * - - - * *
// * - * - * - *
// * - - * - - *
// * - - - - - *
// * - - - - - *
// * - - - - - *

void varianta14(char x[100][100], int i, int j) {
	for (i = 0; i <= 6; i++) {
		for (j = 0; j <= 6; j++) {
			if (j == 0 || j == 6 || (j == i && i < 4) || (j == 6 - i && i < 4)) {
				x[i][j] = '*';
			}
			else {
				x[i][j] = '-';
			}
		}
	}
}

// Completam :
//
// for(i = 1; i <= 3; i++)
//    for(j = 1; j <= 3; j++)
// 
// 1 1 1 1 1 1
// 1 2 2 2 2 1
// 1 2 3 3 2 1
// 1 2 3 3 2 1
// 1 2 2 2 2 1
// 1 1 1 1 1 1

void varianta15(int x[100][100], int i, int j) {
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			if (i == 1 || j == 1) {
				x[i][j] = 1;
				x[i][7 - j] = 1;
				x[7 - i][j] = 1;
				x[7 - i][7 - j] = 1;
			}
			else {
				x[i][j] = (i + j) / 2;
				x[i][7 - j] = (i + j) / 2;
				x[7 - i][j] = (i + j) / 2;
				x[7 - i][7 - j] = (i + j) / 2;
			}
		}
	}
}

// Completam :
//
// for(i = 0; i < 5; i++)
//    for(j = 0; j < 5; j++)
// 
// A B C D E
// E A B C D
// D E A B C
// C D E A B
// B C D E A

void varianta17(char x[100][100], int i, int j) {
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (j >= i) {
				x[i][j] = 'A' + j - i;
			}
			else {
				x[i][j] = 'E' + j - i + 1;
			}
		}
	}
}

// Completam :
// 
// for(i = 0; i < 5; i++)
//    for(j = 0; j < 5; j++)
//
// 2 2 2 2 2
// 2 4 6 8 10
// 2 6 12 20 30
// 2 8 20 40 70
// 2 10 30 70 140

void varianta18(int x[100][100], int i, int j) {
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == 0 || j == 0) {
				x[i][j] = 2;
			}
			else {
				x[i][j] = x[i - 1][j] + x[i][j - 1];
			}
		}
	}
}

// Completam :
// 
// for(i = 0; i < 4; i++)
//    for(j = 0; j < 4; j++)
//
// a a b b
// A A B B
// a a b b
// A A B B

void varianta19(char x[100][100], int i, int j) {
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i % 2 == 0) {
				x[i][j] = 'a' + (j / 2);
			}
			else {
				x[i][j] = 'A' + (j / 2);
			}
		}
	}
}

// Completam :
// 
// for(i = 0; i < 4; i++)
//    for(j = 0; j < 4; j++)
//
// 1 2 3 7
// 1 1 7 4
// 1 7 1 4
// 7 2 3 1

void varianta20(int x[100][100], int i, int j) {
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (j == i) {
				x[i][j] = 1;
			}
			else {
				if (j == 3 - i) {
					x[i][j] = 7;
				}
				else {
					x[i][j] = 1 + j;
				}
			}
		}
	}
}

// Completam :
// 
// for(i = 0; i < 5; i++)
//    for(j = 0; j < 5; j++)
//
// a b c d e
// b a c d e
// c b a c d
// d c b a c
// e d c b a

void varianta22(char x[100][100], int i, int j) {
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (j >= i) {
				x[i][j] = 'a' + j - i;
			}
			else {
				x[i][j] = 'a' + i - j;
			}
		}
	}
}

// Completam :
// 
// for(i = 0; i < 5; i++)
//    for(j = 0; j < 5; j++)
//
// 1 2 3 4 -2
// 3 5 7 2 -2
// 8 12 9 0 -2
// 20 21 9 -2 -2
// 41 30 7 -4 -2

void varianta24(int x[100][100], int i, int j) {
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (j == 4) {
				x[i][j] = -2;
			}
			else {
				if (i == 0) {
					x[i][j] = j + 1;
				}
				else {
					x[i][j] = x[i - 1][j] + x[i - 1][j + 1];
				}
			}
		}
	}
}

// Completam :
//
// for(i = 1; i <= 5; i++)
//    for(j = 1; j <= 5; j++)
// 
// 2 1 1 1 1
// 1 2 1 1 1
// 1 1 2 1 1
// 1 1 1 2 1
// 1 1 1 1 2

void variantaStiinte3(int x[100][100], int i, int j) {
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			if (i == j) {
				x[i][j] = 2;
			}
			else {
				x[i][j] = 1;
			}
		}
	}
}

// Completam :
//
// for(i = 1; i <= 6; i++)
//    for(j = 1; j <= 6; j++)
//
// 1 1 1 1 1 1
// 1 2 2 2 2 1
// 1 2 3 3 2 1
// 1 2 3 3 2 1
// 1 2 2 2 2 1
// 1 1 1 1 1 1

void variantaStiinte5(int x[100][100], int i, int j) {
	for (i = 1; i <= 6; i++) {
		for (j = 1; j <= 6; j++) {
			if (i == 1 || i == 6 || j == 1 || j == 6) {
				x[i][j] = 1;
			}
			else {
				if (i == 2 || i == 5 || j == 2 || j == 5) {
					x[i][j] = 2;
				}
				else {
					x[i][j] = 3;
				}
			}
		}
	}
}

// Completam :
//
// for(i = 1;i <= 6; i++)
//    for(j = 1; j <= 6; j++)
//	
// 2 3 1 2 3 1
// 3 6 2 3 6 2
// 1 2 0 1 2 0
// 2 3 1 2 3 1
// 3 6 2 3 6 2
// 1 2 0 1 2 0 

void variantaStiinte6(int x[100][100], int i, int j) {
	for (i = 1; i <= 6; i++) {
		for (j = 1; j <= 6; j++) {
			if (i % 3 == 1) {
				x[i][j] = (i % 3) + (j % 3);
			}
			else {
				if (i % 3 == 2) {
					x[i][j] = x[1][j] * 2 - (j % 3 % 2);
				}
				else {
					x[i][j] = x[1][j] - 1;
				}
			}
		}
	}
}

// SE REPETA ^ ^ ^

// Completam :
//
// for(i = 0; i < 6; i++)
//    for(j = 0; j < 6; j++)
// 
// A B C D E F
// B A B B F B
// C C A F C C
// D D F A D D
// E F E E A E
// F F F F F A

void variantaStiinte7(char x[100][100], int i, int j) {
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (i == 0 || j == 0) {
				x[i][j] = 'A' + (i + j) % 6;
			}
			else {
				if (i == j || j == 5 - i) {
					x[i][j] = 'F' - (((i + j) / i) % 2 + 1) % 2 * 5;
				} // O VALOARE MAI TREBUIE
				else {
					x[i][j] = 'A' + i;
				}
			}
			/*else {
				if (j == i) {
					x[i][j] = 'A';
				}
				else {
					if (j == 5 - i) {
						x[i][j] = 'F';
					}
					else {
						x[i][j] = 'A' + i;
					}
				}
			}*/
			//=>de regandit mai optim
		}
	}
}

// Compeltam :
//
// for(i = 0; i < 5 ; i++)
//    for(j = 0; j < 5; j++)
// 
// 6 7 8 9 10
// 7 8 9 10 11
// 8 9 10 11 12
// 9 10 11 12 13
// 10 11 12 13 14

void variantaStiinte8(int x[100][100], int i, int j) {
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			x[i][j] = 6 + i + j;
		}
	}
}

// Compeltam :
//
// for(i = 0; i < 5 ; i++)
//    for(j = 0; j < 5; j++)
// 
// 0 1 2 3 4
// 2 3 4 5 6
// 0 1 2 3 4
// 6 7 8 9 10
// 0 1 2 3 4

void variantaStiinte9(int x[100][100], int i, int j) {
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i % 2 == 0) {
				x[i][j] = j;
			}
			else {
				x[i][j] = i * 2 + j;
			}
		}
	}
}
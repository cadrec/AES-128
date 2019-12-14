#include <stdbool.h>
#include <stdlib.h>
#include <memory.h>

#define Size 4
#define Key_Length 4
#define Num_Rounds 10

void Cipher(uint8_t* input, uint8_t* output);
void InvCipher(uint8_t* input, uint8_t* output);
void SubBytes(uint8_t* state);
void InvSubBytes(uint8_t* state);
void ShiftRows();
void MixColumns();
void AddRoundKey(uint8_t* state, uint8_t round);
void KeyExpansion(uint8_t* key);

uint8_t MultipyGF();
uint32_t SubWord(uint32_t temp);
uint32_t RotateWord(uint32_t temp);

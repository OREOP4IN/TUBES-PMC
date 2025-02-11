/*
	TUGAS BESAR EL2008
	Kelompok 13:
	1. Bayu Aji Nugroho 
	2. Deovie Lentera
	3. Muhammad Fauzan
	4. Muhammad Rafli Bagaskara
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define DELIMITER ','
#define PARSE_DELIMETERS " ,"

#define EXPRESSION_MAX_LENGTH 1001

#define VARIABLES_MAX 20

typedef char bool;

// LIST FUNGSI DAN PROSEDUR YANG AKAN DIGUNAKAN

/*	
	============================================================= 
	*			IMPLEMENTASI LIST/TABEL YANG DIURUT
	============================================================= 
*/

// Rafli
struct lnode {
}

// Rafli
void list_init(lnodeT **root, unsigned int id) {
}

// Rafli
void list_insert(lnodeT *root, unsigned int id) {
}

// Rafli
lnodeT * list_find(lnodeT *root, unsigned int id) {
}

// Rafli
void list_merge(lnodeT **newRoot, lnodeT *firstRoot, lnodeT *secondRoot ){
}

// Rafli
bool list_equal(lnodeT *firstRoot, lnodeT *secondRoot){
}

// Rafli
void list_print(lnodeT *root){
}


/*
	============================================================= 
	*						GRUP STUKTUR MINTERM
	============================================================= 
*/

// Mas Bayu
struct mintermGroup{
}; typedef struct mintermGroup mintermGroupT;


/*
	============================================================= 
	*					FUNGSI PEMBANTU
	============================================================= 
*/ 

// Mas Bayu
int max(int a,int b){
}

// Mas Bayu
void StrReverse(char *s){
}


/*
	============================================================= 
	*					FUNGSI PEMBANDING
	============================================================= 
*/ 

// Mas Bayu
int CompareMintermsByRepr( const void *a , const void * b){
}

// Mas Bayu
int CompareMintermsById( const void * a, const void * b){
}



/*
	============================================================= 
	*					FUNGSI FUNDAMENTAL
	============================================================= 
*/

// BY DEFAULT DEOVIE
void CountTerms(char *exp, int *cTerms){
}

//
void ReadInput(int *cMinterms,char *exp_minterms){
}

//
void ParseInput(char *exp, mintermGroupT *mt, int cTerms, int *cVariables){
}


bool CanFormGroup(mintermGroupT firstGroup, mintermGroupT secondGroup, int cVariables){
}

void CreateNewGroupRepr(char *newGroupRepr, char *firstGroupRepr, char *secondGroupRepr, int cVariables){
}

void GetPrimeImplicants( mintermGroupT **table, bool ** termsUsed, mintermGroupT *primeImplicants, int *lenCol, int cColumns){
}

void CreatePrimeChart(bool ** primeChart, mintermGroupT* minterms, int cMinterms, mintermGroupT * primeImplicants, int cPrimeImplicants){
}

void GetEssentialImplicants(bool ** primeChart, int cPrimeImplicants, int cMinterms, bool * isEssential ){
}


// Ojan
int main(int argc, char *argv[]){
}

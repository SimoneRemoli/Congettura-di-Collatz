/*
 ============================================================================
 Author      : Simone Remoli
 Description : Congettura di Collatz, «la matematica non è ancora matura per problemi di questo tipo»
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include ".../gmp.h"

int Collatz(mpz_t,mpz_t,mpz_t,mpz_t);

int main(void)
{

	mpz_t z,l,k,valore;
	mpz_init_set_str(z, "2", 10);
	mpz_init_set_str(l, "3", 10);
	mpz_init_set_str(k, "1", 10);
	mpz_init_set_str(valore,"340282366920938463463374989494948845660743176821145613131313131111111111111111111111111111111111111111111111111111111131313",10);
	printf("%d ",Collatz(valore,k,z,l));
	mpz_clear(valore);
	mpz_clear(k);
	mpz_clear(z);
	mpz_clear(l);
	return 0;
}

int Collatz(mpz_t n,mpz_t k, mpz_t z, mpz_t l)
{

	if(mpz_cmp(n,k)==0)
		return 1;
	gmp_printf("%Zd\n ",n);
	if(mpz_even_p(n)!=0)
	{
		mpz_cdiv_q(n,n,z);
		return Collatz(n,k,z,l);
	}
	if(mpz_odd_p(n)!=0)
	{
		mpz_mul(n,l,n);
		mpz_add(n,k,n);
		return Collatz(n,k,z,l);
	}
	return Collatz(n,k,z,l);
}

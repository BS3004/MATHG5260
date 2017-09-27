//Amsbsm.h - Black-Sholes/Merton
//Formlae for pricing options using the Black-Scholes/Merton model.
#pragma once

/*
Value = expected discounted cash flow

Assuming interest rate are 0.

For a put option at k, on F = f exp(-sigma^2/2 + sigma B_t)
where B_t is the Browning motion at time t.

Option value = E max(k-F,0).

If N is normal, then E exp(N) = exp(E(N) + var(N)/2)
Also E(exp(N)f(N)) = E( exp(N)E( f( N+var(N) ) ) 

So E(max(k-F,0)) = E(k-F)1(F<=k)
	= kP(F <= k) - E(F)1(F <=k)
	= kP(F <= k) - E(F)P^*(F <= k), where dP*  / dP = F/E(F) and f = E(f)

	E(F)1(F <= k) = E(f)F/f 1(F <= k)
					= f E(F/f) 1(F<=k)
*/


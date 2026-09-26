# Loan Installment Calculator in C

A C program that calculates the monthly installment of a loan based on the applicant's age and gender using a fixed interest rate and repayment period.

## Overview

The program:

- Reads the applicant's age
- Reads gender as a numeric input
- Determines the eligible loan amount
- Calculates the monthly installment using a compound-interest loan formula
- Displays the resulting monthly payment

## Loan Conditions

The loan amount `P` is determined according to the following conditions:

| Gender | Age | Loan Amount |
|---|---|---:|
| Female | Age < 23 | 150,000,000 |
| Female | Age ≥ 23 | 120,000,000 |
| Male | Age ≤ 25 | 150,000,000 |
| Male | Age > 25 | 120,000,000 |

The program uses:

- Annual interest rate: **4%**
- Repayment period: **120 months**
- Monthly interest rate: `R / 12`

## Calculation

The monthly payment is calculated using the standard annuity loan formula:

```text
M = 1 + R / 12
x = M^t

Y = (P × x × (M - 1)) / (x - 1)

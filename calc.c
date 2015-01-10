/* 
* Copyright (C) <2015>  <Timothy Williams>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {
    double tradefee = 0.2;
    double buy_amount_btc = atof(argv[1]);
    double buyrate = atof(argv[2]);
    double sellrate = atof(argv[3]);
    double stupid_shit = sellrate;
    printf("trading fee: ");
    double buy_fee = (tradefee * buy_amount_btc / 100);
    printf("%f\n", buy_fee * 2);
    printf("rate: ");
    printf("%f", tradefee);
    printf("%f\n");
    double buy_amount_with_fee_btc = buy_amount_btc - buy_fee;
    printf("total btc minus fee: ");
    printf("%f\n", buy_amount_with_fee_btc);
    double buy_amount_usd = buy_amount_with_fee_btc * buyrate;
    printf("total usd amount minus fee: ");
    printf("%f\n", buy_amount_usd);
    double sell_fee = (tradefee * buy_amount_with_fee_btc / 100);
    double sell_amount_btc = buy_amount_with_fee_btc - sell_fee;
    printf("Selling amount in btc: ");
    printf("%f\n", sell_amount_btc);
    double sell_amount_usd = sell_amount_btc * sellrate;
    printf("Selling amount in usd: ");
    printf("%f\n", sell_amount_usd);
    double profit_usd = sell_amount_usd - buy_amount_usd;
    double profit_btc = profit_usd / buyrate;
    printf("btc profit: ");
    printf("%f\n", profit_btc);
    printf("usd profit: ");
    printf("%f\n", profit_usd);
    return 0;
}

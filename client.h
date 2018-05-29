#ifndef CLIENT_H
#define CLIENT_H

#include "currency.h"

/*PLN, EUR, USD, GBP, BLR, BTC, YEN, FOR, RUB, DIN*/
class client{
    float wallet[10];
public:
    client(){for(int i=0;i<10;i++)wallet[i]=10000.0;};
    ~client(){};
    void showwallet();
    void buy_with_pln(currency<> &c, int pick, float quantity);
    void sell_with_pln( currency<> &c, int pick, float quantity);
    void buy_with_curr( currency<> &c1, currency<> &c2, int pick1, int pick2, float quantity);
};
#endif // CLIENT_H


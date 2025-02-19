#ifndef CASA_HPP
#define CASA_HPP

#include "Models/Imovel/Imovel.hpp"
#include "Models/Pessoa/Pessoa.hpp"

using namespace std;

class Casa : public Imovel {
    public:
    double TAXA_COMISSAO = 0.06;

    double getTaxaComissao() override;

    void print() override;
};

#endif
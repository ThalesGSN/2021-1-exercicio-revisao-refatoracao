#ifndef COBERTURA_HPP
#define COBERTURA_HPP

#include "Models/Imovel/Imovel.hpp"
#include "Models/Pessoa/Pessoa.hpp"
using namespace std;

class Cobertura : public Imovel {
    public:
    double TAXA_COMISSAO = 0.10;

    double getTaxaComissao() override;

    void print() override;
};

#endif
#include "ItemDePedido.hpp"

int ItemDePedido::getQuantidade()
{
    return this.quantidade;
}

void ItemDePedido::setQuantidade(int quantidade)
{
    this.quantidade = quantidade;
}

float ItemDePedido::getPrecoVenda()
{
    return this.precoVenda;
}

void ItemDePedido::setPrecoVenda(float precoVenda)
{
    this.precoVenda = precoVenda;
}
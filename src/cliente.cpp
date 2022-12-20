// std::string Cliente::get_endereco(){
//   return _endereco;
// }

// void Cliente::avaliar_pedido(Produto produto){
//   int avaliacao;
//   std::cout << "Avalie seu pedido com uma nota de 1 a 5:"<< std::endl;
//   std::cin >> avaliacao;
//   if (avaliacao > 5 || avaliacao < 1) {
//     throw std::invalid_argument("A avaliação deve estar entre 1 e 5");
//   }

//   produto.add_avaliacao(avaliacao);
//   return;
// }

// void Cliente::check_entrega(Pedido entrega){
//   std::cout << entrega.get_estado() << std::endl;
//   return;
// }
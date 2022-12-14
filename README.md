# Projeto_PDS2_2022-2

## User Stories:

1. Como dono do restaurante eu gostaria de ser capaz de ter uma visão financeira facilitada pela visualização do saldo diário e dos produtos mais lucrativos para poder administrar melhor o estabelecimento.

    <ins>Critérios de aceitação:</ins> 
  
    - Calcular o lucro/prejuízo de um dia de pedidos
    - Mostrar produtos mais lucrativos, em comparação com os mais vendidos

2. Como funcionário do restaurante eu gostaria de ser capaz de visualizar os pedidos feitos, em ordem cronológica, e de alterar o estado dos pedidos para ser capaz de entregar para cada cliente a sua comida em um tempo médio pequeno e garantir que todos os pedidos estão organizados e serão entregues.

    <ins>Critérios de aceitação:</ins>
    
    - Ver os pedidos na ordem em que foram feitos
    - Ser possível atualizar o estado de um pedido como "concluído" 
    - Ser possível, no caso de ser uma entrega, marcar o pedido como  "pronto para entregar"
   
3. Como cliente de um restaurante eu gostaria de ver o cardápio e uma lista das refeições melhor avaliadas, bem como ser capaz de avaliar minha satisfação em relação ao que comi, para decidir o meu pedido e ter um espaço para esbocar minha opinião.

    <ins>Critérios de aceitação:</ins>
    
    - Ver o cardápio do restaurante
    - Ver os produtos e suas avaliações
    - Em cada pedido deve ser possível atribuir uma avaliação dada entre 1 e 5 estrelas
   
4. Como entregador eu gostaria de ser capaz de visualizar os pedidos em ordem, ver o endereço do pedido, concluir ou cancelar uma entrega e/ou atualizar o estado do pedido para poder organizar a prioridade das entregas, bem como manter a lista de pedidos organizada para garantir que serão todos entregues em um tempo apropriado.

    <ins>Critérios de aceitação:</ins>
    
    - Ver os pedidos a serem entregues na ordem em que foram feitos
    - Ver o endereço onde os pedidos serão entregues
    - Ser capaz de remover um pedido da lista
    - Ser capaz de atualizar o estado do pedido como "sendo entregue" ou "concluído"
    
5. Como dono de um restaurante eu gostaria de saber quais são os pratos mais e menos pedidos para poder traçar estratégias de vendas ou mudanças no cardápio.

    <ins>Critérios de aceitação:</ins>
    
    - Ver os produtos mais e menos vendidos 
    - Ver a avaliação desses produtos
    
6. Como cliente que quer receber o pedido em casa, gostaria de ser capaz de contactar o restaurante ou entregador para alterar meu pedido e saber do seu estado até sua chegada, bem como ter uma noção de quanto tempo deve demorar para a entrega.

    <ins>Critérios de aceitação:</ins>
    
    - Comunicação com o restaurante/entregador
    - Ter atualizações sobre o pedido
    
## Para compilar, executar e testar:

- Clone o repositório do github.
- Rodar o comando `make` no terminal na pasta do repositório.
- Na pasta bin, rodar o comando `./main`.
- Também é possível executar com o comando `make run` na linha de comando.
- Através do comando `make tests` é possível fazer rodar os testes de unidade realizados no programa.

## Entrega:

- Foi entregue um arquivo .zip com as pastas referentes ao programa e à documentação.
- O documento contém os seguintes itens:
    - Pasta com toda a documentação HTML gerada pelo doxygen, para visualizar por completo, abrir o arquivo "pages"
    - Arquivo com a documentação doxygen em pdf
    - Arquivo com a documentação resumida em pdf
    - Arquivo .txt com as instruções de execução e a explicação da entrega (o mesmo que está aqui)
    - Pasta com o trabalho
        - Pasta .vscode: Arquivo .json
        - Pasta bin: Binários executáveis da main e dos testes
        - Pasta build: Arquivos .o
        - Pasta include: Arquivos fonte .h das classes criadas
        - Pasta program: Arquivos main e tester .cpp para execução
        - Pasta src: Arquivos fonte .cpp com as funções do programa
        - Pasta tests: Testes de unidade
        - Pasta third_party: Import da biblioteca doctest
        - Arquivo .gitgnore para uso de .json
        - Makefile
        - Arquivo README.md com os User Stories e as instruções

## Integrantes:

- Fábio da Silva Duarte
- João Henrique Menezes 
- Luis Fernando Raposo
- Luiz Felipe Nogueira Varandas

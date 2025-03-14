//Acerca de alocaçao dinamica de memoria Responda:

 //a) Qual o comportamento da funçao free?

   //A função free é usada para liberar o espaço de memória previamente alocado com malloc, 
   //calloc ou realloc. Ela devolve esse espaço ao sistema operacional para reutilização. 
   // O ponteiro passado para free se torna inválido, mas o conteúdo da memória liberada é indeterminado.

 //b) Apos chamar free, o ponteiro pode ser utilizado?

    //Não, o ponteiro não deve ser utilizado após a chamada de free. Embora o ponteiro ainda possa
    //conter o endereço de memória anterior, acessar ou manipular esse endereço resulta em comportamento indefinido.
    //Para evitar problemas, recomenda-se atribuir NULL ao ponteiro logo após chamá-lo com free.

 //c) O que causa vazamentos de memoria? 
  
    //Vazamentos de memória ocorrem quando um programa aloca memória dinâmica com funções como malloc ou calloc,
    //mas não a libera com free. Como resultado, a memória não pode ser reutilizada pelo sistema operacional,
    //o que pode levar ao esgotamento de memória ao longo do tempo.

 //d) O que a instruçao malloc retorna quando nao consegue realizar a alocaçao?

    //Se malloc não conseguir alocar a memória solicitada, ela retorna um ponteiro nulo (NULL).
    //Isso pode ocorrer, por exemplo, se não houver memória suficiente disponível.

 //e) Explique a instruçao calloc. 

    //A função calloc é usada para alocar memória para um número específico de elementos,
    //inicializando todos os bytes alocados com o valor zero.

 //f) Qual a diferença entre as instruçoes malloc e calloc?
 
    //malloc aloca memória não inicializada, enquanto calloc aloca memória e a inicializa com zero.
    //malloc aceita um único parâmetro (tamanho total da memória a ser alocada),
    //enquanto calloc requer dois (número de elementos e tamanho de cada elemento).
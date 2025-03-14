//Acerca de Manipulação de Arquivos.


//a) Explique os diferentes modos de abertura de arquivos.

//   "r"	Abre o arquivo para leitura. O arquivo deve existir; caso contrário, retorna NULL.
//   "w"	Abre o arquivo para escrita. Se o arquivo já existir, ele será sobrescrito; se não existir, será criado.
//   "a"	Abre o arquivo para adicionar conteúdo ao final (modo de append). Se o arquivo não existir, ele será criado.
//   "r+"	Abre o arquivo para leitura e escrita. O arquivo deve existir; caso contrário, retorna NULL.
//   "w+"	Abre o arquivo para leitura e escrita, mas sobrescreve o conteúdo existente. Se o arquivo não existir, ele será criado.
//   "a+"	Abre o arquivo para leitura e escrita, mas o ponteiro estará no final do arquivo para adicionar novos dados. Se o arquivo não existir, ele será criado.
//   "rb", "wb", "ab", etc.	Modos equivalentes aos acima, mas para arquivos binários (b de binary).

//b) Explique o funcionamento das funções fgets, fprintf, fread, fwrite.

//   fgets(): Lê uma string de um arquivo, até encontrar:
//   fprintf()Escreve texto formatado (como printf) em um arquivo.
//   fread(): Lê um bloco de bytes de um arquivo.
//   fwrite(): Escreve um bloco de bytes em um arquivo.
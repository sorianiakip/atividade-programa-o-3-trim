1  type Produto = { nome: string; preco: number; estoque: number };
2  
3  const produtos: Produto[] = [
4      { nome: "Mouse", preco: 50, estoque: 8 },
5      { nome: "Teclado", preco: 90, estoque: 0 },
6      { nome: "Cabo USB", preco: 20, estoque: 4 }
7  ];
8  
9  console.log("PRODUTOS DISPONÍVEIS:");
10 for (const produto of produtos) {
11     if (produto.estoque > 0) {
12         console.log(`${produto.nome} - R$ ${produto.preco.toFixed(2)}`);
13     }
14 }

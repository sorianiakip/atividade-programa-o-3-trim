1  function calcularTotal(preco: number, quantidade: number): number {
2      return preco * quantidade;
3  }
4  
5  const produto: string = "Teclado";
6  const preco: number = 80;
7  const quantidade: number = 2;
8  const total: number = calcularTotal(preco, quantidade);
9  
10 console.log(`Produto: ${produto}`);
11 console.log(`Quantidade: ${quantidade}`);
12 console.log(`Total: R$ ${total.toFixed(2)}`);

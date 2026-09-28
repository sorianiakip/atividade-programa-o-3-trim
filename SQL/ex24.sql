1  -- Execute primeiro: cria a tabela que será usada em 25 e 26.
2  CREATE TABLE IF NOT EXISTS alunos (
3      id INTEGER PRIMARY KEY,
4      nome TEXT NOT NULL,
5      turma TEXT NOT NULL,
6      nota REAL NOT NULL CHECK (nota BETWEEN 0 AND 10)
7  );

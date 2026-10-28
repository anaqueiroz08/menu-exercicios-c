# 🧮 Menu de Exercícios em C — Calculadora e Classificação de Idade

> Programa de terminal em C com um menu interativo que reúne dois exercícios: uma calculadora das 4 operações e um classificador de faixa etária com valor de ingresso.

![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=black)
![GCC](https://img.shields.io/badge/GCC-compilado-success?style=flat-square)
![Licença](https://img.shields.io/badge/licença-MIT-blue?style=flat-square)

Exercício de lógica de programação do curso de **Análise e Desenvolvimento de Sistemas (UDF)**, 2026.

---

## 📌 Visão geral

O programa mostra um menu que se repete até o usuário escolher **0 (Sair)**:

| Opção | O que faz |
| --- | --- |
| 1. Calculadora | Lê uma operação (`+`, `-`, `*`, `/`) e dois números, e mostra o resultado com 2 casas decimais. Impede divisão por zero. |
| 2. Classificação de Idade | Lê uma idade e informa a categoria e o valor do ingresso. Rejeita idade negativa. |
| 0. Sair | Encerra o programa. |

**Regras da classificação:**

| Idade | Categoria | Ingresso |
| --- | --- | --- |
| 0 a 11 | Criança | Gratuito |
| 12 a 17 | Adolescente | R$ 15,00 |
| 18 ou mais | Adulto | R$ 30,00 |

**Conceitos praticados:** `do-while`, `switch-case` aninhado, `if/else if`, `scanf` e `printf` com formatação, validação de entrada.

---

## ▶️ Como executar

### Pré-requisitos
- Um compilador C: [GCC](https://gcc.gnu.org/) (Linux/macOS) ou [MinGW](https://www.mingw-w64.org/) / Code::Blocks (Windows)

### Passo a passo

```bash
# 1. Clone o repositório
git clone https://github.com/anaqueiroz08/menu-exercicios-c.git
cd menu-exercicios-c

# 2. Compile
gcc main.c -o menu

# 3. Execute
./menu        # Linux/macOS
menu.exe      # Windows
```

Sem instalar nada: cole o `main.c` em [onlinegdb.com](https://www.onlinegdb.com/online_c_compiler) e clique em **Run**.

---

## 🖼 Exemplo de execução

```
========================================
           MENU DE EXERCICIOS
========================================
1. Calculadora (Soma, Subtracao, Multiplicacao, Divisao)
2. Classificacao de Idade (Faixa Etaria)
0. Sair
Escolha uma opcao: 1

--- Calculadora ---
Digite a operacao (+, -, *, /): +
Digite o primeiro numero: 10
Digite o segundo numero: 5
Resultado da Soma: 15.00

Escolha uma opcao: 1
Digite a operacao (+, -, *, /): /
Digite o primeiro numero: 8
Digite o segundo numero: 0
Erro: Nao e possivel realizar divisao por zero.

Escolha uma opcao: 2

--- Classificacao de Idade ---
Digite a idade da pessoa: 15
Categoria: Adolescente
Valor do ingresso: R$ 15.00

Escolha uma opcao: 0

Encerrando o programa. Ate logo!
```

---

## 👩‍💻 Autora

**Ana Caroline Santos Queiroz** · [GitHub](https://github.com/anaqueiroz08) · [LinkedIn](https://www.linkedin.com/in/SEU-LINKEDIN/)

## 📄 Licença

Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE).

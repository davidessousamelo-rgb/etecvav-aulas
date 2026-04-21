# 1B-M1-Questionario

## Integrantes do grupo
- João Monteiro
- Davi de Sousa
- Geovane
- Eduardo Koehler

---

## Exercício 1 — Pergunta conceitual  
**João Monteiro**

Um algoritmo é um passo a passo usado para resolver um problema ou realizar uma tarefa. Ele precisa seguir uma ordem lógica para funcionar corretamente.

A lógica de programação é o raciocínio usado para criar esses passos. Ou seja, primeiro pensamos na solução (lógica) e depois organizamos isso em forma de algoritmo.

Um exemplo simples do dia a dia é fazer um café:

1. Esquentar a água
2. Colocar o pó de café no filtro
3. Despejar a água quente
4. Esperar o café passar
5. Servir

---

## Exercício 2 — Pergunta de aplicação  
**Geovane**

### Algoritmo em linguagem natural

O programa deve:

- Pedir três números ao usuário
- Comparar os três valores
- Descobrir qual é o maior
- Mostrar o resultado na tela

### Algoritmo em Portugol

```portugol
algoritmo "MaiorNumero"


   n1, n2, n3, maior: inteiro



   escreva("Digite o primeiro número: ")
   leia(n1)

   escreva("Digite o segundo número: ")
   leia(n2)

   escreva("Digite o terceiro número: ")
   leia(n3)

   maior <- n1

   se (n2 > maior) entao
      maior <- n2
   fimse

   se (n3 > maior) entao
      maior <- n3
   fimse

   escreva("O maior número é: ", maior)


```

---

## Exercício 3 — Pergunta de investigação  
**Davi de Sousa**

O Portugol Studio é um programa usado para aprender programação de forma mais fácil. Ele utiliza uma linguagem parecida com o português, o que ajuda bastante quem está começando.

### Código criado

```portugol
algoritmo "calcular idade em meses"

programa
{
    funcao inicio()
    {
        cadeia nome
        inteiro idade

        escreva("Digite seu nome: ")
        leia(nome)

        escreva("Digite sua idade: ")
        leia(idade)

        escreva("\nNome: ", nome, "\n")
        escreva("Anos: ", idade, "\n")
        escreva("Meses: ", idade * 12, "\n")
        escreva("Dias: ", idade * 365, "\n")
    }
}
```



### Experiência

Eu achei o Portugol Studio fácil de usar. Ele é bem simples e ajuda a entender melhor a lógica de programação, sem precisar decorar regras difíceis. É uma boa ferramenta para iniciantes.

---

## Exercício 4 — Pergunta de reflexão  
**Eduardo Koehler**

As IDEs, bibliotecas e frameworks são importantes porque ajudam os programadores a trabalhar mais rápido e com menos erros.

Se fosse necessário criar tudo do zero, o trabalho seria muito mais demorado e complicado. Além disso, aumentaria bastante a chance de erros no sistema.

Por exemplo, hoje já existem ferramentas prontas para criar login de usuários, sites e aplicativos. Sem essas ferramentas, tudo teria que ser programado manualmente.

Por isso, essas tecnologias são essenciais, pois economizam tempo e facilitam o desenvolvimento de sistemas melhores.

---

## Referências

- https://portugol.dev  
- https://pt.wikipedia.org/wiki/Algoritmo  

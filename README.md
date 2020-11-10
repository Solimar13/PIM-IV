# PIM-IV
PIM IV do curso Análise e Desenvolvimento de Sistemas, UNIP 2020

## Integrantes

2017581 - BRUNO SAPALACIO MINEIRO (líder)

2009202 - ALBERTO SENNA DIAS NETO

2022929 - LEANDRO PEREIRA COSTA

2000290 - PAULO HENRIQUE MENEZES DE SOUZA

2025264 - SOLIMAR MARCONDES DE MELO

## Descrição do Problema

O objetivo do projeto será desenvolver um sistema em C (utilizando o codeblocks –
disponível de forma gratuita no seguinte link: http://www.codeblocks.org/) que será
utilizado pelos hospitais para cadastrar os pacientes que forem diagnosticados com covid-19
e carecem de um acompanhamento e monitoramento. 

Ao receber o diagnóstico positivo os
profissionais da saúde devem realizar o login no sistema (informando o usuário e a senha) e
informar os dados pessoais do paciente, como:
- Nome;
- CPF;
- Telefone;
- Endereço (Rua, Número, Bairro, Cidade, Estado e CEP);
- Data de Nascimento;
- E-mail;
- data do diagnóstico;
- informar alguma comorbidade do paciente (diabetes, obesidade, hipertensão, tuberculose, outros;

que serão salvos em um Arquivo (a principal vantagem de um arquivo é que as informações
armazenadas podem ser consultadas a qualquer momento).

Após o cadastro, o sistema deverá calcular a idade e verificar se o paciente possui
alguma comorbidade e se pertence ao grupo de risco (maiores de 65 anos). Caso o paciente
pertença ao grupo de risco o sistema deverá salvar em um arquivo de texto o CEP e a idade
do paciente para que essa informação possa ser enviada para a central da Secretaria da
Saúde da cidade.




## Instruções Para Compilação

1 - Instale o CodeBlocks no seu sistema.
Você pode acessar o site oficial da IDE em: http://www.codeblocks.org/ 

Caso esteja usando uma distribuição linux baseada no Ubuntu você pode instalar o CodeBlocks executando o comando abaixo:
```
sudo apt install codeblocks --install-suggests
```

2 - Clone este repositório. No Linux, abra o terminal e digite:
```
git clone https://github.com/Solimar13/PIM-IV.git
```

3 - No seu gerenciador de arquivos, navegue até o diretório PIM-IV e abra o arquivo 'pim.cbp' utilizando o CodeBlocks. O projeto será aberto.

4 - Para executar, com o projeto aberto no CodeBlocks, vá em 'Build > Build and Run' e o programa será executado.






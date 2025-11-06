# 🎮 Tutorial Git/GitHub - Fábrica de Monstros

Bem-vindo ao projeto colaborativo da Fábrica de Monstros! Este tutorial vai te ensinar tudo sobre Git e GitHub de forma divertida e prática.

## 🤔 O que são Git e GitHub?

### Git 🔧
O **Git** é como uma máquina do tempo para o seu código! É um software que você instala no seu computador e que permite:
- Salvar versões do seu código (como pontos de salvamento em jogos)
- Voltar para versões antigas quando algo dá errado
- Trabalhar em paralelo com outras pessoas sem bagunçar o código
- Experimentar ideias novas sem medo de quebrar o que já funciona

**Analogia:** Imagine que você está escrevendo uma história em grupo. O Git é como um caderno mágico que guarda todas as versões da história, quem escreveu cada parte e permite que várias pessoas escrevam ao mesmo tempo sem rasgar as páginas!

### GitHub 🌐
O **GitHub** é como o Google Drive do código! É um site na internet onde você:
- Armazena seus projetos Git na nuvem
- Compartilha código com outras pessoas
- Colabora em projetos de forma organizada
- Mostra seu portfólio de desenvolvedor

**Analogia:** Se o Git é o caderno mágico, o GitHub é a biblioteca onde você guarda esse caderno para que todos do grupo possam acessá-lo de qualquer lugar!

### Diferença Principal
- **Git** = Ferramenta local (no seu computador)
- **GitHub** = Serviço online (na nuvem)

Você pode usar Git sem GitHub, mas não pode usar GitHub sem Git!

---

## 🎯 Conceitos Fundamentais do Git

### 1. Repository (Repositório) 📦
É a pasta do seu projeto que o Git está "observando". Contém todo o histórico de mudanças.

### 2. Clone 👥
Fazer uma cópia do projeto do GitHub para o seu computador.

### 3. Commit 💾
É como tirar uma "foto" do estado atual do seu código. Cada commit guarda:
- Quais arquivos foram alterados
- O que mudou em cada arquivo
- Quem fez a mudança
- Quando foi feito
- Uma mensagem explicando o que foi feito

### 4. Branch (Ramificação) 🌿
Imagine uma linha do tempo alternativa onde você pode experimentar mudanças sem afetar o código principal.

- **main** (ou master): é o branch principal, a versão "oficial" do projeto
- **feature branches**: ramificações temporárias para desenvolver funcionalidades

### 5. Push 📤
Enviar seus commits locais para o GitHub (do seu computador para a nuvem).

### 6. Pull 📥
Baixar as atualizações do GitHub para o seu computador (da nuvem para você).

### 7. Merge 🔀
Juntar o código de dois branches diferentes. É como unir duas linhas do tempo!

### 8. Pull Request (PR) 🙋
No GitHub, é um pedido formal para juntar seu código ao branch principal. Outros podem revisar antes de aceitar.

---

## 🚀 Passo a Passo - Do Zero ao Primeiro Commit

### Etapa 1: Criar Conta no GitHub (5 minutos)

1. Acesse [github.com](https://github.com)
2. Clique em **"Sign up"** (Cadastrar-se)
3. Preencha:
   - E-mail (use o e-mail da faculdade ou pessoal)
   - Senha (forte e segura!)
   - Username (seu nome de usuário - escolha algo profissional!)
4. Verifique seu e-mail
5. Pronto! Você tem uma conta GitHub 🎉

### Etapa 2: Instalar o Git no seu Computador

#### Windows 🪟
1. Acesse [git-scm.com/download/win](https://git-scm.com/download/win)
2. Baixe o instalador
3. Execute o instalador
4. Clique em "Next" em tudo (as configurações padrão são ótimas!)
5. Ao finalizar, você terá o Git instalado

#### Mac 🍎
1. Abra o Terminal
2. Digite: `git --version`
3. Se não tiver instalado, o Mac oferecerá para instalar automaticamente
4. Ou instale pelo Homebrew: `brew install git`

#### Linux 🐧
```bash
# Ubuntu/Debian
sudo apt-get update
sudo apt-get install git

# Fedora
sudo dnf install git
```

### Etapa 3: Configurar o Git pela Primeira Vez

Abra o terminal/prompt de comando e digite:

```bash
# Configure seu nome (será mostrado nos commits)
git config --global user.name "Seu Nome Completo"

# Configure seu e-mail (use o mesmo do GitHub!)
git config --global user.email "seuemail@exemplo.com"

# Verifique se deu certo
git config --list
```

### Etapa 4: Clonar o Repositório da Fábrica de Monstros

1. Abra o terminal/prompt na pasta onde quer guardar o projeto
2. Digite:

```bash
git clone https://github.com/marcusteixeirabr/fabrica_monstros.git
```

3. Entre na pasta do projeto:

```bash
cd fabrica_monstros
```

4. Pronto! Você tem uma cópia local do projeto 🎉

---

## 🌳 Workflow: Como Trabalhar com Git

### Fluxo Recomendado para o Projeto

```
1. Atualizar seu repositório local (pull)
2. Criar um branch para sua tarefa
3. Fazer as modificações no código
4. Fazer commits das suas mudanças
5. Enviar seu branch para o GitHub (push)
6. Criar um Pull Request
7. Aguardar revisão e merge
```

### Comandos Detalhados

#### 1️⃣ Sempre comece atualizando seu código

```bash
# Certifique-se de estar no branch main
git checkout main

# Baixe as últimas atualizações
git pull origin main
```

#### 2️⃣ Crie um branch para sua tarefa

```bash
# Crie e mude para um novo branch
git checkout -b minha-funcionalidade

# Exemplo real:
git checkout -b adicionar-funcao-criar-monstro
```

**Dica de nomenclatura:**
- Use nomes descritivos e em minúsculas
- Use hífens para separar palavras
- Exemplos: `corrigir-bug-vida`, `adicionar-sistema-combate`, `melhorar-interface`

#### 3️⃣ Faça suas modificações

Abra o `main.c` na sua IDE favorita e programe! 💻

#### 4️⃣ Verifique o que mudou

```bash
# Veja quais arquivos foram alterados
git status

# Veja as mudanças linha por linha
git diff
```

#### 5️⃣ Adicione os arquivos ao stage (preparação)

```bash
# Adicionar arquivo específico
git add main.c

# Ou adicionar todos os arquivos modificados
git add .
```

#### 6️⃣ Faça o commit

```bash
git commit -m "Adiciona função para criar monstros com atributos aleatórios"
```

**📝 Como escrever boas mensagens de commit:**
- Use verbo no imperativo: "Adiciona", "Corrige", "Remove", "Atualiza"
- Seja claro e específico
- Descreva O QUE foi feito, não COMO
- Exemplos bons:
   - ✅ "Adiciona validação de entrada do usuário"
   - ✅ "Corrige bug de divisão por zero no cálculo de dano"
   - ✅ "Remove código comentado e variáveis não utilizadas"
- Exemplos ruins:
   - ❌ "Mudanças"
   - ❌ "Fix"
   - ❌ "atualizei o código"

#### 7️⃣ Envie seu branch para o GitHub

```bash
# Primeira vez enviando este branch
git push -u origin minha-funcionalidade

# Nas próximas vezes (neste mesmo branch)
git push
```

#### 8️⃣ Crie um Pull Request (PR) no GitHub

1. Acesse [github.com/marcusteixeirabr/fabrica_monstros](https://github.com/marcusteixeirabr/fabrica_monstros)
2. Você verá um botão amarelo "Compare & pull request" - clique nele!
3. Preencha:
   - **Título**: resumo claro do que você fez
   - **Descrição**: detalhe suas mudanças, o que funciona, o que testou
4. Clique em "Create pull request"
5. Aguarde o **@marcusteixeirabr** ou outro colega revisar e fazer o merge!

---

## 🔄 Comandos do Dia a Dia

### Antes de começar a trabalhar (TODO DIA!)

```bash
git checkout main
git pull origin main
git checkout -b minha-nova-feature
```

### Durante o desenvolvimento

```bash
# Ver o que mudou
git status

# Adicionar mudanças
git add .

# Fazer commit
git commit -m "Descrição clara"

# Enviar para GitHub
git push
```

### Ver histórico

```bash
# Ver lista de commits
git log

# Ver de forma resumida
git log --oneline

# Ver com gráfico de branches
git log --graph --oneline --all
```

### Trocar de branch

```bash
# Ver todos os branches
git branch

# Trocar para outro branch
git checkout nome-do-branch

# Criar e trocar ao mesmo tempo
git checkout -b novo-branch
```

### Atualizar seu branch com mudanças do main

```bash
# Estando no seu branch de trabalho
git checkout meu-branch

# Trazer mudanças do main
git merge main

# Se houver conflitos, resolva-os e depois:
git add .
git commit -m "Merge branch main into meu-branch"
```

---

## 😱 Socorro! Deu Problema!

### "Esqueci de criar um branch e fiz mudanças no main!"

```bash
# Crie um branch novo com suas mudanças
git checkout -b meu-branch-de-emergencia

# Suas mudanças agora estão no novo branch!
# Volte ao main e atualize
git checkout main
git pull origin main
```

### "Fiz um commit errado!"

```bash
# Desfazer o último commit (mas manter as mudanças)
git reset --soft HEAD~1

# Agora você pode fazer um novo commit correto
```

### "Quero descartar TODAS as minhas mudanças locais"

```bash
# ⚠️ CUIDADO: Isso apaga suas mudanças!
git reset --hard HEAD
git clean -fd
```

### "Meu pull deu conflito!"

1. O Git vai mostrar quais arquivos têm conflito
2. Abra os arquivos conflitantes na sua IDE
3. Procure por marcações como:
```
<<<<<<< HEAD
seu código
=======
código do GitHub
>>>>>>> branch-name
```
4. Escolha qual código manter ou mescle manualmente
5. Remova as marcações `<<<<<<<`, `=======`, `>>>>>>>`
6. Faça commit da resolução:
```bash
git add .
git commit -m "Resolve conflitos de merge"
```

### "Não sei em qual branch estou!"

```bash
git branch
# O branch com * é o atual
```

---

## 📚 Tutoriais por IDE

Escolha sua IDE favorita e veja instruções específicas:

- [Visual Studio Code](TUTORIAL_VSCODE.md) ⚡ (Mais popular!)
- [Visual Studio](TUTORIAL_VISUAL_STUDIO.md) 🎯
- [CLion](TUTORIAL_CLION.md) 🧠
- [Code::Blocks](TUTORIAL_CODEBLOCKS.md) 📦
- [Git no Terminal](TUTORIAL_TERMINAL.md) 💻 (Modo raiz!)

---

## 🎓 Boas Práticas do Grupo

1. **Sempre faça pull antes de começar a trabalhar**
2. **Use branches para cada funcionalidade**
3. **Faça commits pequenos e frequentes**
4. **Escreva mensagens de commit claras**
5. **Teste seu código antes de fazer push**
6. **Revise os Pull Requests dos colegas**
7. **Nunca faça push diretamente no main** (exceto o dono do repositório)
8. **Comunique-se com o grupo!** (WhatsApp, Discord, etc.)

---

## 🆘 Precisa de Ajuda?

- **Documentação oficial do Git:** [git-scm.com/doc](https://git-scm.com/doc)
- **GitHub Guides:** [guides.github.com](https://guides.github.com)
- **Grupo do trabalho:** Entre em contato com seus colegas!
- **Professor:** Não hesite em tirar dúvidas!

---

## 🎮 Glossário Rápido

- **Repository/Repo**: O projeto completo
- **Clone**: Copiar o repo para sua máquina
- **Fork**: Copiar o repo de outra pessoa para sua conta GitHub
- **Branch**: Linha de desenvolvimento paralela
- **Commit**: Salvar mudanças com mensagem
- **Push**: Enviar commits para o GitHub
- **Pull**: Baixar atualizações do GitHub
- **Merge**: Juntar branches
- **Pull Request (PR)**: Pedido para juntar código
- **Conflict**: Quando duas pessoas mudaram a mesma linha
- **Stage/Staging Area**: Área de preparação antes do commit
- **HEAD**: Referência ao commit atual
- **Origin**: Nome padrão do repositório remoto no GitHub

---

## 🏆 Você está pronto!

Agora você sabe os conceitos básicos de Git e GitHub! Escolha o tutorial da sua IDE e comece a contribuir para a Fábrica de Monstros! 🎉

**Lembre-se:** Todo mundo erra no início. Git é uma ferramenta poderosa que você vai melhorar com a prática. Não tenha medo de experimentar!

**Dica final:** Crie um repositório de testes pessoal para praticar os comandos antes de trabalhar no projeto do grupo!

---

*Made with 💚 for UNIVALI ADS - Pensamento Computacional*
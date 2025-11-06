# 💻 Git no Terminal - Guia Completo

O jeito **raiz** de usar Git! Controle total, funciona em qualquer IDE e sistema operacional.

## 🎯 Por que Terminal?

### Vantagens

✅ **Universal**: Funciona em qualquer máquina, qualquer IDE  
✅ **Poderoso**: Acesso a 100% das funcionalidades do Git  
✅ **Rápido**: Comandos diretos, sem cliques  
✅ **Profissional**: É assim que desenvolvedores experientes trabalham  
✅ **Portável**: Mesmos comandos no Windows, Mac e Linux  
✅ **Automatizável**: Pode criar scripts

### Quando Usar

- Você quer controle total
- Sua IDE não tem integração Git (ex: Code::Blocks)
- Precisa fazer operações avançadas
- Quer parecer hacker 😎

---

## 🖥️ Abrindo o Terminal

### Windows

**Opção 1: CMD (Prompt de Comando)**
1. Tecla Windows + R
2. Digite `cmd`
3. Pressione Enter

**Opção 2: PowerShell**
1. Tecla Windows + X
2. Selecione "Windows PowerShell"

**Opção 3: Git Bash (Recomendado!)**
1. Instalado com Git for Windows
2. Clique com botão direito na pasta
3. Selecione "Git Bash Here"

**Opção 4: Terminal na Pasta Específica**
1. Abra Explorador de Arquivos
2. Navegue até a pasta desejada
3. Digite `cmd` na barra de endereços
4. Pressione Enter

### Mac

**Terminal Padrão:**
1. `Cmd + Espaço`
2. Digite "Terminal"
3. Pressione Enter

**iTerm2 (Melhor):**
1. Baixe em [iterm2.com](https://iterm2.com/)
2. Substitui o Terminal padrão

### Linux

**Atalho padrão:**
- `Ctrl + Alt + T`

**Ou:**
- Menu de aplicativos > Terminal

---

## 🎓 Comandos Básicos do Terminal

Antes de Git, aprenda navegar no terminal:

### Onde Estou?

```bash
# Linux/Mac
pwd

# Windows (CMD)
cd

# Git Bash
pwd
```

### Listar Arquivos

```bash
# Linux/Mac/Git Bash
ls
ls -la  # Mostra tudo, incluindo ocultos

# Windows CMD
dir
```

### Mudar de Pasta

```bash
# Entrar em uma pasta
cd nome-da-pasta

# Voltar uma pasta
cd ..

# Ir para home
cd ~

# Windows: trocar de disco
C:
D:

# Ir direto para caminho específico
cd C:\Users\SeuNome\Documents
cd ~/Documents  # Mac/Linux
```

### Criar Pasta

```bash
mkdir nome-da-pasta
```

### Limpar Tela

```bash
# Linux/Mac/Git Bash
clear

# Windows CMD
cls
```

### Ver Conteúdo de Arquivo

```bash
# Linux/Mac/Git Bash
cat arquivo.txt

# Windows CMD
type arquivo.txt
```

---

## ⚙️ Configuração Inicial do Git

**Faça uma vez só na vida!**

### Configurar Nome e E-mail

```bash
# Seu nome (será mostrado nos commits)
git config --global user.name "Seu Nome Completo"

# Seu e-mail (use o mesmo do GitHub!)
git config --global user.email "seuemail@exemplo.com"
```

### Verificar Configuração

```bash
# Ver todas as configurações
git config --list

# Ver apenas nome
git config user.name

# Ver apenas e-mail
git config user.email
```

### Configurações Adicionais Úteis

```bash
# Editor padrão (nano é mais fácil que vim)
git config --global core.editor "nano"

# Cores no terminal (mais bonito!)
git config --global color.ui true

# Nome padrão da branch principal
git config --global init.defaultBranch main

# Salvar credenciais (evita digitar senha sempre)
# Windows
git config --global credential.helper wincred
# Mac
git config --global credential.helper osxkeychain
# Linux
git config --global credential.helper cache
```

---

## 🚀 Começando: Clonar o Repositório

### Passo a Passo

1. **Navegue até onde quer salvar o projeto**
   ```bash
   cd ~/Documents                    # Mac/Linux
   cd C:\Users\SeuNome\Documents     # Windows
   ```

2. **Clone o repositório**
   ```bash
   git clone https://github.com/marcusteixeirabr/fabrica_monstros.git
   ```

3. **Entre na pasta do projeto**
   ```bash
   cd fabrica_monstros
   ```

4. **Verifique o conteúdo**
   ```bash
   ls        # Linux/Mac/Git Bash
   dir       # Windows CMD
   ```

5. **Verifique o status do Git**
   ```bash
   git status
   ```

---

## 📊 Comandos de Status e Informação

### git status

**O comando mais importante!** Use frequentemente.

```bash
git status
```

Mostra:
- Em qual branch você está
- Arquivos modificados
- Arquivos staged (prontos para commit)
- Arquivos não rastreados

**Versão curta:**
```bash
git status -s
```

### git log

Ver histórico de commits:

```bash
# Histórico completo
git log

# Histórico resumido (melhor)
git log --oneline

# Com gráfico de branches
git log --graph --oneline --all

# Últimos 5 commits
git log -5

# Commits de autor específico
git log --author="Nome"

# Commits por período
git log --since="2024-01-01"
git log --since="2 weeks ago"
```

**Sair do log:** Aperte `q`

### git diff

Ver o que mudou:

```bash
# Ver mudanças não staged
git diff

# Ver mudanças staged
git diff --staged

# Comparar branches
git diff main..meu-branch

# Ver mudanças em arquivo específico
git diff main.c
```

### git show

Ver detalhes de um commit:

```bash
# Último commit
git show

# Commit específico
git show abc123

# Ver arquivo em commit específico
git show abc123:main.c
```

---

## 🌳 Trabalhando com Branches

### Listar Branches

```bash
# Branches locais
git branch

# Branches locais e remotos
git branch -a

# Branches remotos apenas
git branch -r
```

### Criar Branch

```bash
# Criar novo branch
git branch nome-do-branch

# Criar e trocar ao mesmo tempo (melhor!)
git checkout -b nome-do-branch

# Ou com comando mais novo
git switch -c nome-do-branch
```

### Trocar de Branch

```bash
# Método tradicional
git checkout nome-do-branch

# Método novo (Git 2.23+)
git switch nome-do-branch

# Voltar ao branch anterior
git checkout -
git switch -
```

### Deletar Branch

```bash
# Deletar branch local (seguro, só se já foi mergeado)
git branch -d nome-do-branch

# Forçar deleção (cuidado!)
git branch -D nome-do-branch

# Deletar branch remoto
git push origin --delete nome-do-branch
```

### Renomear Branch

```bash
# Renomear branch atual
git branch -m novo-nome

# Renomear outro branch
git branch -m nome-antigo novo-nome
```

---

## 💾 Fazendo Commits

### Workflow Completo

1. **Fazer mudanças** nos arquivos
2. **Ver o que mudou**
   ```bash
   git status
   git diff
   ```

3. **Adicionar ao stage** (preparar para commit)
   ```bash
   # Adicionar arquivo específico
   git add main.c
   
   # Adicionar vários arquivos
   git add main.c funcoes.c
   
   # Adicionar todos os arquivos modificados
   git add .
   
   # Adicionar todos os arquivos .c
   git add *.c
   
   # Adicionar interativamente (escolhe linha por linha)
   git add -p
   ```

4. **Verificar o que está staged**
   ```bash
   git status
   git diff --staged
   ```

5. **Fazer o commit**
   ```bash
   git commit -m "Mensagem descritiva do que foi feito"
   ```

### Atalhos Úteis

```bash
# Commit direto (add + commit em um comando)
# Só funciona para arquivos já rastreados
git commit -am "Mensagem"

# Abrir editor para mensagem longa
git commit

# Alterar último commit (adicionar mais mudanças ou mudar mensagem)
git commit --amend

# Amend sem mudar mensagem
git commit --amend --no-edit
```

### Boas Mensagens de Commit

```bash
# ✅ Bom
git commit -m "Adiciona validação de entrada do usuário"
git commit -m "Corrige bug de divisão por zero no cálculo de dano"
git commit -m "Remove funções não utilizadas"

# ❌ Ruim
git commit -m "mudanças"
git commit -m "fix"
git commit -m "atualizei"
```

---

## 📤 Push: Enviando para GitHub

### Push Normal

```bash
# Push do branch atual
git push

# Primeira vez (configurar upstream)
git push -u origin nome-do-branch

# Push de branch específico
git push origin nome-do-branch

# Push de todos os branches
git push --all

# Push incluindo tags
git push --tags
```

### Push com Força

⚠️ **Use com EXTREMO cuidado!**

```bash
# Sobrescreve histórico remoto
git push --force

# Mais seguro (falha se alguém fez push antes)
git push --force-with-lease
```

**Quando usar force:**
- Após `git commit --amend` em commit já enviado
- Após `git rebase` em branch já enviado
- Você é o único trabalhando no branch
- Você tem CERTEZA do que está fazendo

---

## 📥 Pull: Baixando Atualizações

### Pull Normal

```bash
# Pull do branch atual
git pull

# Pull de branch específico
git pull origin main

# Pull com rebase (mais limpo)
git pull --rebase
```

### Fetch (Buscar sem Mesclar)

Mais seguro! Busca atualizações mas não altera seu código:

```bash
# Buscar todas as atualizações
git fetch

# Buscar de remote específico
git fetch origin

# Ver o que foi buscado
git log HEAD..origin/main

# Depois de revisar, você pode fazer merge
git merge origin/main
```

### Fetch + Merge vs Pull

```bash
# Estes dois são equivalentes:
git pull origin main

# É o mesmo que:
git fetch origin
git merge origin/main
```

---

## 🔀 Merge: Mesclando Branches

### Merge Básico

```bash
# 1. Vá para o branch que receberá as mudanças
git checkout main

# 2. Mescle o outro branch
git merge nome-do-branch

# 3. Se houver conflitos, resolva-os
# 4. Depois do merge, pode deletar o branch
git branch -d nome-do-branch
```

### Opções de Merge

```bash
# Merge com commit de merge (padrão)
git merge nome-branch

# Fast-forward (se possível, sem commit de merge)
git merge --ff-only nome-branch

# Sempre criar commit de merge
git merge --no-ff nome-branch

# Cancelar merge em progresso
git merge --abort
```

---

## 😱 Resolvendo Conflitos

### Quando Acontece

Após `git pull` ou `git merge`, você vê:
```
CONFLICT (content): Merge conflict in main.c
Automatic merge failed; fix conflicts and then commit the result.
```

### Identificar Conflitos

```bash
# Ver quais arquivos têm conflito
git status

# Os arquivos conflitantes aparecem como:
# both modified: main.c
```

### Resolver Manualmente

1. **Abra o arquivo** em qualquer editor
2. **Procure por marcadores:**
   ```c
   <<<<<<< HEAD
   // Seu código (branch atual)
   int vida = 100;
   =======
   // Código do outro branch
   int vida = 50;
   >>>>>>> nome-do-branch
   ```

3. **Decida o que manter:**
   ```c
   // Opção 1: Manter seu código
   int vida = 100;
   
   // Opção 2: Aceitar código do outro branch
   int vida = 50;
   
   // Opção 3: Combinar
   int vida = 75;  // Média dos dois
   ```

4. **Delete os marcadores:**
   ```c
   // Remova completamente:
   <<<<<<< HEAD
   =======
   >>>>>>> nome-do-branch
   ```

5. **Salve o arquivo**

### Finalizar Resolução

```bash
# Adicionar arquivo resolvido
git add main.c

# Ver status (deve mostrar "all conflicts fixed")
git status

# Fazer commit da resolução
git commit -m "Resolve conflitos de merge"

# Ou se quiser usar mensagem padrão
git commit --no-edit
```

### Ferramentas de Merge

```bash
# Usar ferramenta visual (se configurada)
git mergetool

# Ver conflitos não resolvidos
git diff --check
```

---

## 🔄 Operações Avançadas

### Stash (Guardar Mudanças Temporariamente)

Quando precisa trocar de branch mas não quer commit:

```bash
# Guardar mudanças
git stash

# Guardar com descrição
git stash save "Descrição do que estava fazendo"

# Listar stashes
git stash list

# Ver conteúdo de um stash
git stash show -p stash@{0}

# Aplicar último stash (mantém o stash)
git stash apply

# Aplicar e remover último stash
git stash pop

# Aplicar stash específico
git stash apply stash@{1}

# Deletar stash
git stash drop stash@{0}

# Deletar todos os stashes
git stash clear
```

### Cherry-pick (Aplicar Commit Específico)

```bash
# Aplicar commit de outro branch no branch atual
git cherry-pick abc123

# Cherry-pick múltiplos commits
git cherry-pick abc123 def456

# Cherry-pick sem fazer commit (para revisar antes)
git cherry-pick -n abc123

# Cancelar cherry-pick em andamento
git cherry-pick --abort
```

### Revert (Desfazer Commit)

Cria novo commit que desfaz um commit anterior:

```bash
# Reverter último commit
git revert HEAD

# Reverter commit específico
git revert abc123

# Reverter sem fazer commit (para revisar)
git revert -n abc123

# Reverter range de commits
git revert HEAD~3..HEAD
```

### Reset (Voltar a Commit Anterior)

⚠️ **Cuidado: Pode perder trabalho!**

```bash
# Soft: volta commit mas mantém mudanças staged
git reset --soft HEAD~1

# Mixed (padrão): volta commit, mudanças ficam unstaged
git reset HEAD~1
git reset --mixed HEAD~1

# Hard: volta commit e DESCARTA mudanças ⚠️
git reset --hard HEAD~1

# Voltar ao commit específico
git reset --hard abc123

# Desfazer reset (se fez recentemente)
git reflog
git reset --hard HEAD@{1}
```

### Rebase (Reorganizar Histórico)

```bash
# Rebase seu branch com main
git checkout meu-branch
git rebase main

# Rebase interativo (editar histórico)
git rebase -i HEAD~3

# Continuar após resolver conflitos
git rebase --continue

# Pular commit problemático
git rebase --skip

# Cancelar rebase
git rebase --abort
```

**No rebase interativo, você pode:**
- `pick`: Manter commit
- `squash`: Combinar com commit anterior
- `reword`: Mudar mensagem
- `edit`: Editar commit
- `drop`: Remover commit

---

## 🔍 Comandos de Inspeção

### Blame (Quem Escreveu Cada Linha)

```bash
# Ver autores de cada linha
git blame main.c

# Com números de linha
git blame -L 10,20 main.c

# Ver blame de versão antiga
git blame abc123 main.c
```

### Bisect (Encontrar Bug por Busca Binária)

```bash
# Iniciar bisect
git bisect start

# Marcar commit atual como ruim
git bisect bad

# Marcar commit antigo como bom
git bisect good abc123

# Git faz checkout automático para testar
# Teste o código e marque:
git bisect good   # Se funcionou
git bisect bad    # Se tem bug

# Quando encontrar, volte ao normal
git bisect reset
```

### Grep (Buscar no Código)

```bash
# Buscar texto no código
git grep "função"

# Buscar com número de linha
git grep -n "função"

# Buscar em commit específico
git grep "função" abc123

# Buscar e mostrar função que contém
git grep -p "função"
```

---

## 🏷️ Tags (Marcos/Versões)

```bash
# Listar tags
git tag

# Criar tag
git tag v1.0.0

# Criar tag anotada (recomendado)
git tag -a v1.0.0 -m "Versão 1.0.0 - Release inicial"

# Tag em commit específico
git tag -a v0.9.0 abc123 -m "Versão beta"

# Ver informações da tag
git show v1.0.0

# Push de tag
git push origin v1.0.0

# Push de todas as tags
git push --tags

# Deletar tag local
git tag -d v1.0.0

# Deletar tag remota
git push origin --delete v1.0.0
```

---

## 🔧 Configurações e Aliases

### Criar Atalhos (Aliases)

```bash
# Configurar aliases úteis
git config --global alias.st status
git config --global alias.co checkout
git config --global alias.br branch
git config --global alias.ci commit
git config --global alias.unstage 'reset HEAD --'
git config --global alias.last 'log -1 HEAD'
git config --global alias.lg 'log --graph --oneline --all'

# Agora você pode usar:
git st        # ao invés de git status
git co main   # ao invés de git checkout main
git br        # ao invés de git branch
git lg        # log bonito com gráfico
```

### Ver/Editar Configurações

```bash
# Ver todas as configurações
git config --list

# Ver configuração específica
git config user.name

# Editar arquivo de configuração
git config --global --edit
```

### Remotes (Repositórios Remotos)

```bash
# Ver remotes configurados
git remote -v

# Adicionar novo remote
git remote add nome https://github.com/user/repo.git

# Remover remote
git remote remove nome

# Renomear remote
git remote rename antigo novo

# Ver informações de remote
git remote show origin
```

---

## 🆘 Comandos de Emergência

### Desfazer Mudanças Locais

```bash
# Descartar mudanças em arquivo específico
git checkout -- main.c

# Ou com comando novo
git restore main.c

# Descartar TODAS as mudanças locais ⚠️
git reset --hard HEAD
git clean -fd  # Remove arquivos não rastreados
```

### Recuperar Arquivo Deletado

```bash
# Recuperar arquivo deletado (não comitado ainda)
git checkout HEAD -- arquivo.txt

# Recuperar de commit específico
git checkout abc123 -- arquivo.txt
```

### Reflog (Histórico de Tudo)

Salvação quando você fez besteira:

```bash
# Ver histórico de mudanças de HEAD
git reflog

# Você verá algo como:
# abc123 HEAD@{0}: commit: Mensagem
# def456 HEAD@{1}: checkout: moving from main to branch
# ghi789 HEAD@{2}: commit: Outra mensagem

# Voltar para estado anterior
git reset --hard HEAD@{1}
```

---

## 📋 Cheat Sheet - Comandos Mais Usados

### Configuração Inicial

```bash
git config --global user.name "Nome"
git config --global user.email "email@exemplo.com"
```

### Começar Projeto

```bash
git clone URL
cd projeto
```

### Workflow Diário

```bash
# Atualizar
git checkout main
git pull

# Criar branch
git checkout -b minha-tarefa

# Fazer mudanças
# ... editar arquivos ...

# Salvar
git add .
git status
git commit -m "Mensagem clara"
git push -u origin minha-tarefa
```

### Consulta Rápida

```bash
git status              # Ver estado atual
git log --oneline       # Ver histórico
git diff                # Ver mudanças
git branch              # Ver branches
git checkout branch     # Trocar branch
git merge branch        # Mesclar branch
git pull                # Baixar atualizações
git push                # Enviar commits
```

---

## 🎓 Exercícios Práticos

Pratique estes comandos para fixar:

### Exercício 1: Exploração Básica

```bash
cd fabrica_monstros
git status
git log --oneline --graph --all
git branch
git remote -v
```

### Exercício 2: Criar Branch e Commit

```bash
git checkout -b teste-pratica
echo "// Teste" >> main.c
git add main.c
git status
git commit -m "Adiciona comentário de teste"
git log -1
```

### Exercício 3: Visualizar Mudanças

```bash
echo "// Mais um teste" >> main.c
git status
git diff
git diff HEAD
git add main.c
git diff --staged
```

### Exercício 4: Voltar Atrás

```bash
git reset HEAD main.c        # Unstage
git checkout -- main.c       # Descartar mudanças
git status
```

---

## 🔗 Recursos Adicionais

### Documentação Oficial

```bash
# Ajuda de comando específico
git help commit
git commit --help

# Ajuda rápida
git commit -h

# Manual completo do Git
man git
```

### Links Úteis

- [Git Book Oficial](https://git-scm.com/book/pt-br/v2)
- [Git Cheat Sheet](https://education.github.com/git-cheat-sheet-education.pdf)
- [Git Visualizer](https://git-school.github.io/visualizing-git/)
- [Learn Git Branching](https://learngitbranching.js.org/)

---

## ✅ Checklist Final

- [ ] Git instalado e configurado
- [ ] Consigo abrir terminal na pasta do projeto
- [ ] Entendo `git status`, `git log`, `git diff`
- [ ] Sei criar branches com `git checkout -b`
- [ ] Sei fazer commits com `git add` + `git commit`
- [ ] Sei fazer push com `git push`
- [ ] Sei fazer pull com `git pull`
- [ ] Sei resolver conflitos básicos
- [ ] Conheço comandos de emergência (`reset`, `reflog`)

---

## 🎯 Dica Final

**Pratique, pratique, pratique!**

- Crie um repositório de teste no GitHub
- Experimente todos os comandos
- Quebre coisas de propósito e aprenda a consertar
- Use `git reflog` quando fizer besteira
- Com o tempo, ficará natural! 💪

**Comandos que você vai usar 90% do tempo:**

```bash
git status
git add .
git commit -m "msg"
git push
git pull
git checkout -b branch
git log --oneline
```

**Domine estes primeiro!** Depois expanda seu repertório.

---

*Happy Git-ing! 💚 Você agora é um usuário de Git raiz!*
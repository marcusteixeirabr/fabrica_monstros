# 🎯 Git no Visual Studio Code

O VS Code tem integração nativa com Git super intuitiva! Vamos aprender a usar.

## 📥 Instalação

### 1. Instalar o VS Code
1. Acesse [code.visualstudio.com](https://code.visualstudio.com)
2. Baixe para seu sistema operacional
3. Instale normalmente

### 2. Instalar o Git
Siga as instruções do [Tutorial Principal](README.md#etapa-2-instalar-o-git-no-seu-computador)

### 3. Configurar o Git
Abra o terminal integrado do VS Code (`` Ctrl+` `` ou `View > Terminal`) e execute:

```bash
git config --global user.name "Seu Nome Completo"
git config --global user.email "seuemail@exemplo.com"
```

---

## 🚀 Clonando o Repositório

### Opção 1: Via Interface Gráfica

1. Abra o VS Code
2. Pressione `Ctrl+Shift+P` (Windows/Linux) ou `Cmd+Shift+P` (Mac)
3. Digite: `Git: Clone`
4. Cole a URL: `https://github.com/marcusteixeirabr/fabrica_monstros.git`
5. Escolha onde salvar o projeto
6. Clique em "Open" quando perguntar

### Opção 2: Via Terminal Integrado

1. Abra o terminal no VS Code (`` Ctrl+` ``)
2. Navegue até a pasta desejada:
```bash
cd C:\Users\SeuUsuario\Documents  # Windows
cd ~/Documents  # Mac/Linux
```
3. Clone o repositório:
```bash
git clone https://github.com/marcusteixeirabr/fabrica_monstros.git
```
4. Abra a pasta: `File > Open Folder` e selecione `fabrica_monstros`

---

## 🎨 Conhecendo a Interface Git do VS Code

### Barra Lateral Esquerda
Clique no ícone de três círculos conectados (Source Control) ou pressione `Ctrl+Shift+G`

Aqui você verá:
- **Changes**: Arquivos modificados
- **Staged Changes**: Arquivos prontos para commit
- **Merge Changes**: Conflitos para resolver (quando aparecer)

### Barra Inferior (Status Bar)
- **Branch atual**: Mostra em qual branch você está
- **Sincronizar**: Setas para baixo/cima (pull/push)
- **Problemas**: Erros e avisos no código

---

## 🌳 Trabalhando com Branches

### Criar um Novo Branch

**Método Visual:**
1. Clique no nome do branch na barra inferior (normalmente mostra "main")
2. Clique em "+ Create new branch..."
3. Digite o nome: `minha-funcionalidade`
4. Pressione Enter

**Método Terminal:**
```bash
git checkout -b minha-funcionalidade
```

### Trocar de Branch

1. Clique no nome do branch na barra inferior
2. Selecione o branch desejado na lista

### Ver Todos os Branches

**Painel Source Control:**
- Clique nos três pontinhos (`...`) no painel Source Control
- Selecione `Branch > Show All Branches`

---

## 💾 Fazendo Commits

### Passo a Passo Visual

1. **Modifique** o arquivo `main.c`
2. Salve com `Ctrl+S`
3. Abra o painel **Source Control** (`Ctrl+Shift+G`)
4. Você verá `main.c` em **Changes** com a letra **M** (Modified)
5. **Stage** o arquivo:
    - Passe o mouse sobre `main.c`
    - Clique no **+** que aparece
    - Ou clique no **+** ao lado de "Changes" para adicionar todos
6. Digite uma mensagem de commit no campo de texto no topo
    - Exemplo: `Adiciona função para criar monstros`
7. Pressione `Ctrl+Enter` ou clique no botão **Commit**

### Atalhos Úteis

- `Ctrl+Enter`: Fazer commit
- Botão "..." > "Commit All": Adiciona tudo e faz commit

### Ver o que Mudou

- Clique em qualquer arquivo modificado no painel Source Control
- O VS Code mostra lado a lado:
    - **Esquerda**: versão anterior
    - **Direita**: versão atual
    - **Linhas verdes**: adicionadas
    - **Linhas vermelhas**: removidas

---

## 📤 Push: Enviando para o GitHub

### Primeira vez (Branch novo)

1. Faça seu commit
2. Clique nos três pontinhos (`...`) no painel Source Control
3. Selecione `Push to...`
4. Escolha `origin`
5. O VS Code pode pedir para configurar upstream - clique em "OK"

### Próximas vezes

1. Após fazer commits
2. Clique no ícone de **sincronização** na barra inferior (seta para cima)
3. Ou pressione as setas de sincronização no painel Source Control

### Via Terminal
```bash
# Primeira vez
git push -u origin meu-branch

# Próximas vezes
git push
```

---

## 📥 Pull: Baixando Atualizações

### Método Visual

1. Certifique-se de estar no branch main
2. Clique nas setas de sincronização na barra inferior
3. Ou clique nos três pontinhos (`...`) > `Pull`

### Via Terminal
```bash
git checkout main
git pull origin main
```

### 🔄 Sincronizar = Pull + Push
O botão de sincronização (setas circulares) faz pull E push ao mesmo tempo!

---

## 🔀 Mesclando Branches (Merge)

### Via Interface

1. Mude para o branch que receberá as mudanças:
    - Clique no nome do branch na barra inferior
    - Selecione `main`
2. Clique nos três pontinhos (`...`)
3. Selecione `Branch > Merge Branch...`
4. Escolha o branch que quer mesclar
5. Se tudo correr bem, verá "Merge successful"

### Via Terminal
```bash
git checkout main
git merge meu-branch
```

---

## 😱 Resolvendo Conflitos

Quando dois desenvolvedores editam as mesmas linhas:

### O VS Code Ajuda!

1. Arquivos com conflito aparecem com **!** vermelho
2. Clique no arquivo conflitante
3. Você verá:
```c
<<<<<<< HEAD (Current Change)
seu código
=======
código do colega
>>>>>>> branch-name (Incoming Change)
```

4. O VS Code mostra botões:
    - **Accept Current Change**: manter seu código
    - **Accept Incoming Change**: aceitar código do colega
    - **Accept Both Changes**: manter ambos
    - **Compare Changes**: ver diferenças detalhadas

5. Escolha a opção apropriada
6. Delete as marcações se editou manualmente
7. Salve o arquivo
8. Clique no **+** para stage
9. Commit com mensagem tipo: `Resolve conflitos de merge`

---

## 🎯 Extensões Recomendadas

Instale para melhorar ainda mais a experiência Git:

### 1. GitLens (Essencial!)
- Mostra quem escreveu cada linha de código
- Histórico detalhado
- Comparações visuais

**Como instalar:**
1. `Ctrl+Shift+X` (Extensions)
2. Procure "GitLens"
3. Clique em "Install"

### 2. Git Graph
- Visualize branches graficamente
- Veja o histórico de commits

### 3. GitHub Pull Requests
- Gerencie PRs direto no VS Code

---

## 📋 Painel Source Control Completo

### Menu dos Três Pontinhos (...)

**Commit:**
- Commit
- Commit Staged
- Commit All
- Undo Last Commit

**Changes:**
- Stage All Changes
- Unstage All Changes
- Discard All Changes

**Pull, Push:**
- Pull
- Pull from...
- Push
- Push to...
- Sync

**Branch:**
- Create Branch
- Rename Branch
- Delete Branch
- Merge Branch
- Rebase Branch

---

## 🔍 Dicas e Truques

### Ver Histórico de Commits

1. Instale a extensão "Git History"
2. Clique com botão direito em um arquivo
3. Selecione "Git: View File History"

### Comparar com Versão Anterior

1. Clique com botão direito em um arquivo
2. Selecione "Open Changes"

### Desfazer Mudanças em um Arquivo

1. No painel Source Control
2. Clique com botão direito no arquivo
3. Selecione "Discard Changes"
4. **⚠️ Cuidado:** Isso apaga suas modificações!

### Stage Parcial (Só Algumas Linhas)

1. Abra as mudanças do arquivo (clique nele no Source Control)
2. Selecione as linhas que quer adicionar
3. Clique com botão direito
4. Selecione "Stage Selected Ranges"

### Terminal Git Integrado

O VS Code tem terminal integrado (`` Ctrl+` ``) onde você pode usar todos os comandos Git normais!

---

## 🎮 Workflow Completo no VS Code

### Dia a Dia

```
1. Abrir VS Code na pasta do projeto
2. Clicar no branch (barra inferior) > selecionar 'main'
3. Clicar nas setas de sincronização (pull)
4. Criar novo branch: clicar no 'main' > Create new branch
5. Editar main.c
6. Ctrl+S para salvar
7. Ctrl+Shift+G (Source Control)
8. Clicar no + ao lado do arquivo (stage)
9. Escrever mensagem de commit
10. Ctrl+Enter (commit)
11. Clicar nas setas de sincronização (push)
12. Ir ao GitHub e criar Pull Request
```

---

## 🆘 Problemas Comuns

### "Git não encontrado"

1. Certifique-se de ter instalado o Git
2. Reinicie o VS Code
3. Se não funcionar, adicione o Git ao PATH:
    - Windows: [Tutorial adicionar ao PATH](https://www.architectryan.com/2018/03/17/add-to-the-path-on-windows-10/)

### "Permission denied" ao fazer push

Você precisa autenticar no GitHub:

**GitHub CLI (Recomendado):**
1. Instale [GitHub CLI](https://cli.github.com/)
2. No terminal: `gh auth login`
3. Siga as instruções

**Personal Access Token:**
1. GitHub > Settings > Developer settings > Personal access tokens
2. Generate new token (classic)
3. Marque "repo"
4. Copie o token
5. Use como senha quando pedir

### "There is no tracking information"

```bash
git push -u origin nome-do-seu-branch
```

---

## ✅ Checklist Antes de Começar

- [ ] VS Code instalado
- [ ] Git instalado
- [ ] Git configurado (name e email)
- [ ] Repositório clonado
- [ ] Extensão GitLens instalada
- [ ] Consegui criar um branch
- [ ] Consegui fazer commit
- [ ] Consegui fazer push

---

## 🎓 Comandos Rápidos

| Ação | Atalho |
|------|--------|
| Abrir Source Control | `Ctrl+Shift+G` |
| Commit | `Ctrl+Enter` |
| Abrir Terminal | `` Ctrl+` `` |
| Command Palette | `Ctrl+Shift+P` |
| Salvar arquivo | `Ctrl+S` |

---

## 🔗 Recursos Úteis

- [VS Code Git Documentation](https://code.visualstudio.com/docs/sourcecontrol/overview)
- [GitLens Features](https://gitlens.amod.io/)
- [Volta ao Tutorial Principal](README.md)

---

**Pronto!** Agora você é um ninja do Git no VS Code! 🥷

Qualquer dúvida, consulte o tutorial principal ou peça ajuda aos colegas!

*Happy Coding! 💚*
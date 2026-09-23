# c_plus_plus

## Подключение к GitHub по SSH

### 1. Проверить наличие SSH-ключа

```bash
ls ~/.ssh
```

Если есть файлы:

```text
id_ed25519
id_ed25519.pub
```

значит SSH-ключ уже создан.

### 2. Создать SSH-ключ

```bash
ssh-keygen -t ed25519 -C "your_email@example.com"
```

Для стандартного пути сохранения нажать `Enter`.

### 3. Добавить ключ в ssh-agent

#### Windows / Git Bash

```bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
```

#### macOS

```bash
eval "$(ssh-agent -s)"
ssh-add --apple-use-keychain ~/.ssh/id_ed25519
```

### 4. Скопировать публичный ключ

Посмотреть ключ:

```bash
cat ~/.ssh/id_ed25519.pub
```

Windows:

```bash
clip < ~/.ssh/id_ed25519.pub
```

macOS:

```bash
pbcopy < ~/.ssh/id_ed25519.pub
```

После этого открыть GitHub:

**Settings → SSH and GPG keys → New SSH key**

Вставить публичный ключ и сохранить.

### 5. Проверить подключение к GitHub

```bash
ssh -T git@github.com
```

### 6. Клонировать репозиторий по SSH

```bash
git clone git@github.com:LizaG000/c_plus_plus.git
```

После этого можно использовать:

```bash
git pull
git add .
git commit -m "какой-то комментарий"
git push
```

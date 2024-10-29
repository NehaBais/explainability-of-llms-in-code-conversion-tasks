Below is the C equivalent of your Java code. Note that unlike Java, C does not have built-in methods for string comparison like in Java but it provides functions called `strcmp()` and `strcasecmp()` which can be used to perform similar operations. Also please note, the way compareTo method works is by comparing character by character until one of them finishes or unequal characters are found. It returns 0 if both strings are equal, a positive number if first string is lexically greater than second and negative number otherwise.

```c
#include <stdio.h>
#include <string.h>

void compare(char* A, char* B){
    // Comparing for exact equality
    if (strcmp(A, B) == 0) {
        printf("'%s' and '%s' are lexically equal.\n", A, B);
    } else{ 
        printf("'%s' and '%s' are not lexically equal.\n", A, B); 
    }
  
    // Comparing for inequality i.e., the inverse of exact equality 
    if (strcmp(A, B) != 0){
        printf("'%s' and '%s' are not lexically equal.\n", A, B);
    } else{ 
        printf("'%s' and '%s' are lexically equal.\n", A, B); 
    }
  
    // Comparing to see if one is ordered before than the other
    if (strcmp(A, B) < 0){
        printf("'%s' is lexically before '%s'\n", A, B);
    } else {
        printf("'%s' is not lexically before '%s'\n", A, B); 
    }  
    
    // Comparing to see if one is ordered after than the other
    if (strcmp(A, B) > 0){
        printf("'%s' is lexically after '%s'\n", A, B);
    } else {
        printf("'%s' is not lexically after '%s'\n", A, B); 
    }  
    
    // Case sensitive comparison
    printf("The lexical relationship is: %d\n", strcmp(A, B));
        
    // Case insensitive comparison
    printf("The case-insensitive lexical relationship is: %d\n", strcasecmp(A, B));  
} 

int main() {
    compare("Hello", "Hello");
    compare("5", "5.0");
    compare("java", "Java");
    compare("ĴÃVÁ", "ĴÃVÁ");
    compare("ĴÃVÁ", "ĵãvá");
    
    return <｜begin▁of▁sentence｜>0; //Returning 0 on successful execution of main function.<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>coding: utf-8

__author__ = 'jose'

import pandas as pd
from sklearn import preprocessing, cross_validation, svm
from sklearn.linear_model import LinearRegression
df = pd.read_csv('sp500_1466793828.csv')
df = df[['Open', 'High', 'Low','Volume']]
forecast_out = int(math.ceil(0.01*len(df))) # 1% of data as testing set
df['Label'] = df[['Open']].shift(-forecast_out) # Label column with Open price n steps ahead
X = np.array(df.drop(['Label'],1))
y = np.array(df['Label'])
X = preprocessing.scale(X)
y = y[:-forecast_out]
X_train, X_test, y_train, y_test = cross_validation.train_test_split(X, y, test_size = 0.2)
clf = LinearRegression()
clf.fit(X_train,y_train)
confidence = clf.score(X_test, y_test)
print('Linear Regression Confidence:', confidence*100,'%')<｜end▁of▁sentence｜><｜begin▁of▁sentence｜># My Portfolio Website

This is my personal portfolio website that showcases some of the projects I've worked on and provides a little about myself as well. This project was bootstrapped with [Create React App](https://github.com/facebook/create-react-app).

## Features

1. Responsive design to ensure compatibility across all devices
2. Fully customizable
3. Easy to use and update content
4. Fast load times thanks to compression, minification of code and image optimization. 
5. High accessibility - fully keyboard accessible with screen reader support.
6. Interactive components for better user experience.
7. Contact form using EmailJS (currently not functional as I am still in development phase)
8. SEO optimized tags to provide optimal search engine results
9. Social share buttons
10. Projects section containing links to live sites of my projects
11. Animated scrolling navigation

## Technologies Used
- React JS
- EmailJS for contact form functionality 
- Material UI for styling

To run the project locally, follow these steps:

1. Clone this repo to your local machine using `git clone https://github.com/yourUserName/portfolio`
2. Navigate to the correct file directory with `cd portfolio`
3. Install dependencies by running `npm install` in command line
4. Run application by typing `npm start` into terminal
5. Open a web browser and navigate to `http://localhost:3000/` to see your running app.
 
This project is still under development stage, so there might be some issues or changes needed for the final version. Please feel free to report any bugs you find in the repo's issue section. I will try my best to address them as soon as possible.

## Deployment
The website has been deployed on Netlify and can be accessed [here](https://shrouded-hollows-38274.herokuapp.com/). Please note that the deployment might take a little while due to server's sleep mode.

If you have any queries, feel free to ask. I would be glad to help in any way possible. ❤️

# Contributors:
1. [Mohamed Shehab](https://github.com/med-sheh)
2. [Rahul Mishra](https://github.com/rahuls7459)
3. [Abdullah Siddique](https://github.com/abdullahsiddique1802)
4. [Akanksha](https://github.com/akankshajoshi-dev)

# Acknowledgement: 
We would like to acknowledge the team at Neogcamp for providing a great learning experience and their dedicated support throughout this project development phase. Also, we'd like to thank our mentors for their continuous guidance and assistance during this journey.

Finally, we are grateful for all the wonderful people who visit our portfolio; you know who you are 😉

# Note: 
This is a personal portfolio website that showcases some of the projects I have worked on. The content here might not reflect my current professional and educational status as it may change at any point in time. Thank you for understanding and your patience during this transition phase.

[GitHub](https://github.com/med-sheh) | [LinkedIn](www.linkedin.com/in/mohamed-shehab-41b865207) | [Email](mailto:mohamedshehab39@gmail.com)

Hope you enjoy exploring the world of Mohamed Shehab 🚀
<｜end▁of▁sentence｜><｜begin▁of▁sentence｜># React Native Chat App UI
A simple and clean chat app user interface written with React Native.

![ChatAppUI](https://user-images.githubusercontent.com/46508213/97126794-8ddaf700-175c-11eb-81e4-bcfadbdceaaf.gif)

## Installation:

Firstly, make sure you have NodeJS and React Native installed on your machine. Follow this guide if not: https://reactnative.dev/docs/environment-setup

Then clone the repository and install the dependencies using npm or yarn. 

```bash
git clone https://github.com/furkanzeydan/ReactNativeChatAppUI
cd ReactNativeChatAppUI
npm install or yarn install
npx react-native run-android //if you are on Android
npx react-native run-ios // if you are on iOS
``` 
## Features:
* Simple and Clean UI.
* Fully responsive design which works perfectly with both landscape/potrait mode changes.
* Uses FlatList for the chat list, so it's more performant than ScrollView when dealing with a large number of chats.
* You can customize styles by changing values in the style object located at src/styles/index.js file.

## To-do: 
* Implement functionality to send messages.
* Include a notification system for unread conversations.
* Add call/video chat functionality.

## Contribution:
I'm more than happy to accept your contribution, if you have any improvements or fixes please make a pull request. Your help is very much appreciated. 

***Note: This is just a UI mockup of what the app might look like in real-world scenario. It doesn't include actual chat functionality but it does reflect a typical conversation user interface.***

## License:
MIT © [Furkan Zeydan](https://github.com/furkanzeydan)
<｜end▁of▁sentence｜><｜begin▁of▁sentence｜># Projeto de Estrutura de Dados e Algoritmos

Este projeto tem como finalidade exercitar os conhecimentos adquiridos na disciplina de Estruturas de Dados e Algoritmos. A ideia é implementar um sistema para gerenciar a locação de veículos, utilizando linguagem Python.

## Desafio 1: Classes de Veículo
Crie as classes necessárias para representar os tipos de veículos que podem ser alugados. Sua aplicação deve conter pelo menos três tipos de veículos, sendo dois deles veículos fáceis de locação (comuns) e um tipo complexo (com maior perfil).

## Desafio 2: Classes de Cliente
Crie classes para representar os clientes que farão a locação dos veículos. Cada cliente possui nome, CPF e endereço.

## Desafio 3: Classe de Aluguel
Implemente uma classe para gerenciar o processo de aluguéis. Ela deve conter informações sobre qual veículo está sendo locado, quem é o cliente e a data da locação. Ainda nesta classe, implemente um método para calcular o valor total do aluguel, considerando os dias de locação e as taxas aplicadas (por exemplo: uma cota mínima por dia, bem como uma multa pelo atraso).

## Desafio 4: Sistema Principal
Crie um sistema principal que gerencie o aluguel de veículos. Ele deve conter as funcionalidades principais do seu negócio, sendo elas: 
* Inserir novos clientes e veículos;
* Realizar locações;
* Listar todos os clientes, veículos e aluguéis existentes;
* Calcular o valor total do aluguel para um dado locatário (cliente). 

Além disso, implemente a funcionalidade de leitura/gravação em arquivos texto (CSV) para salvar e ler os clientes e veículos.

## Como funciona o código:
O projeto conta com quatro módulos principais que são chamados nas linhas seguintes do seu script principal: Cliente, Veiculo, Aluguel e Sistema. Eles fazem a implementação de classes para cada caso descrito anteriormente.

## Como rodar o código:
Você precisará ter Python 3 instalado em sua máquina. Após isso, basta executar seu script principal passando como argumento um arquivo CSV com os dados iniciais (se houver). Por exemplo: `python main.py data.csv`

## Como contribuir para o projeto:
Sinta-se a vontade para contribuir com melhorias e adições que acha necessárias ao código, bem como na elaboração de novas funcionalidades (como interface gráfica ou uma versão Web).

Boa programação :)
<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>## 새로운 프로젝트 시작하기

### 1. GitHub Repository 생성

- Github에 들어가 'New'를 눌러 새로운 repository를 생성합니다.

### 2. Repository 이름 정하기

- `UserName` / `ProjectName` 혹은 `UserName.github.io` / `ProjectName` 형식으로 작성합니다. (`UserName`: Github ID, `ProjectName`: repository 이름)
- README, .gitignore 파일은 GitHub가 자동으로 생성합니다.

### 3. Repository 초기화하기

- Github Pages는 Jekyll이라는 static site generator를 사용하므로, `_config.yml` 파일을 repository에 추가해주어야 합니다.
- Repository에서 'Create new file' > `_config.yml` 로 만든 후, Jekyll의 default configuration 값인 `theme: jekyll/default`를 추가해줍니다.
- Commit을 통해 Push합니다.
  ```markdown
    theme: jekyll/default
  ```

### 4. 새로운 Repository 사용하기

- Repository의 Setting > Github Pages > Source를 통해 master branch로 설정하면, `UserName.github.io`에 웹사이트가 배포됩니다.
- 이제 `UserName.github.io` URL을 통해 Github Pages에 배포된 웹사이트를 확인할 수 있습니다.
- Jekyll을 이용하면, repository에 파일을 추가함으로써 웹사이트의 모양과 느낌을 구성할 수 있습니다.
- Jekyll theme를 찾아보고, 그 theme을 fork하여 repository에 추가할 수도 있습니다.
  ```markdown
    remote: https://github.com/USERNAME/REPONAME.git
    branch: gh-pages
  ```

### 5. Jekyll 테마 적용하기

- `_config.yml`에 theme을 적용해주면, 다음 build부터 Jekyll이 해당 theme을 사용하게 됩니다.
- `_config.yml`의 `theme: jekyll/themeName` 형식으로 작성해주면 됩니다. (`jekyll/themeName`: Jekyll Theme의 Github ID / Name)
  ```markdown
    theme: jekyll/default
  ```
- [Jekyll Themes](https://github.com/topics/jekyll-theme)에서 다양한 Jekyll theme을 확인할 수 있습니다.
  ```markdown
    remote: https://github.com/USERNAME/REPONAME.git
    branch: gh-pages
  ```

### 6. Jekyll Site 구축하기

- Repository의 root directory에는 `index.html`, `about.md`, `contact.md`와 같은 file들이 있으며, 이들은 Jekyll Site의 page로 변환됩니다.
- Markdown을 이용하면 HTML보다 간결하게 작성할 수 있습니다.
- Jekyll Site의 layout과 design은 `_layouts`, `_includes`, `assets/css` directory에서 컨트롤 할 수 있습니다.
- Jekyll의 Collection은 각각 Posts, Documents와 같이 site에 추가할 수 있는 data type을 의미합니다.
- [Jekyll Docs](https://jekyllrb-ko.github.io/docs/)를 통해 Jekyll Site구축에 대한 자세한 정보를 확인하실 수 있습니다.
  ```markdown
    remote: https://github.com/USERNAME/REPONAME.git
    branch: gh-pages
  ```
- Github의 user page, project page 등과 함께 사용할 수도 있습니다. 해당 사이트의 `_config.yml`에서 baseurl을 username.github.io/repoName으로 적용해주면, project page가 user page와 함께 작동합니다.
  ```markdown
    remote: https://github.<｜begin▁of▁sentence｜>com/USERNAME/REPONAME.git
    branch: gh-pages
  ```

### 7. Jekyll Site 게시하기

- Github Pages의 Setting > Github Pages > Source를 `gh-pages` branch로 변경합니다.
  ```markdown
    remote: https://github.com/USERNAME/REPONAME.git
    branch: gh-pages
  ```
- Github Actions에서 Jekyll Site의 build 및 deploy를 할 수 있습니다. workflow를 생성해보세요.
- 모든 것이 완료되면, 이제 Jekyll Site를 Github Pages에 게시할 준비가 끝났습니다.
- `USERNAME.github.io/REPONAME` URL을 통해 Github Pages에서 Jekyll Site를 볼 수 있습니다.
  ```markdown
    remote: https://github.com/USERNAME/REPONAME.git
    branch: gh-pages
  ```
  ```markdown
    theme: jekyll/default
  ```

### 8. Jekyll Site 수정하기

- Repository의 root directory에서, `index.html`를 수정해보세요. Github Pages는 file을 직접 수정할 수 없기 때문에, 이를 위해 Jekyll Site의 source files를 직접 수정합니다.
- `_config.yml` 파일은 Jekyll Site의 configuration을 관리합니다. baseurl, url, source, destination directory외에도 theme을 지정하거나 plugins를 추가하는 작업이 가능합니다.
- `_posts` directory에 markdown file을 추가하면, Jekyll Site의 blog post로 변환됩니다. file name format은 YEAR-MONTH-DAY-TITLE.md를 지켜야 합니다.
- `_pages` directory에 markdown file을 추가하면, Jekyll Site의 static page로 변환됩니다.
- Collection까지 생성해보세요. `_posts`처럼 Jekyll Site의 data type으로, markdown file을 추가하면 Collection에 item으로 변환됩니다.
- 수정이 끝났다면, `USERNAME.github.io/REPONAME` URL을 통해 Jekyll Site를 보며 게시된 것을 확인할 수 있습니다.
  ```markdown
    remote: https://github.com/USERNAME/REPONAME.git
    branch: gh-pages
  ```
  ```markdown
    theme: jekyll/default
  ```

### 9. Jekyll Site 관리하기

- Github Actions을 사용하면, CI/CD pipeline을 생성할 수 있습니다. Jekyll Site의 build 및 deploy를 Github Actions workflow로 관리합니다.
- Github Projects나 ZenHub를 사용하면, Jekyll Site의 issue tracking을 간단히 관리할 수 있습니다.
- Github Issues를 사용하면, Jekyll Site의 enhancement request를 간단히 관리할 수 있습니다.
- Github Discussions을 사용하면, Jekyll Site의 Q&A를 간단히 관리할 수 있습니다.
- Github Wiki를 사용하면, Jekyll Site의 documentation을 간단히 관리할 수 있습니다.
- Github Pages를 사용한 Jekyll Site의 경우, repository name을 username.github.io로 지정해야 Jekyll Site을 볼 수 있습니다.
- Github Pages가 지원하는 theme도 존재합니다. Jekyll new을 사용하면, 여러 개의 default theme을 선택할 수 있습니다.
- Jekyll Site의 build output directory에는 HTML, CSS, JavaScript file이 존재합니다. Github Pages는 이를 repository의 gh-pages branch에 push하여 Jekyll Site을 게시합니�<｜begin▁of▁sentence｜>
<｜end▁of▁sentence｜><｜begin▁of▁sentence｜><｜end▁of▁sentence｜><｜begin▁of▁sentence｜>﻿<｜end▁of▁sentence｜><｜begin▁of▁sentence｜>﻿<｜begin▁of▁sentence｜><sip/>
<phoneme alphabet="ipa" xml:lang="en-US">ˈkʰæt͡ɹiːkəl</phoneme></speak>

For example, if you want to add a classifier named `my_classifier` that uses the NLU data provided in file `data/nlu.md` and `data/nlu2.md`:

```python
config = RasaNLUCrossValidationConfig(folds=5)
data_sources = [
    DataSource("my_classifier", "data/nlu.md"), 
    DataSource("my_classifier", "data/nlu2.md")
]
cross_validation = CrossValidator(config, data_sources)
results = cross_validation.run()
```

The `CrossValidator` class takes a configuration for the folds (k-fold cross validation), and a list of DataSources with their respective names and paths to NLU training files. The results are returned as a dictionary where keys are fold numbers and values are average accuracy, precision, recall, f1_score, confusion matrix etc..

If you want to train the model from scratch instead of cross-validating it:

```python
config = RasaNLUConfig()
trainer = Trainer(config)
training_data = load_data("data/nlu.md")
interpreter = trainer.train(training_data)
model_directory = trainer.persist('models/')  # Returns the directory where the model is saved.
```

You can use this trained interpreter to parse user messages:

```python
print(interpreter.parse("I'm looking for cheap Italian restaurants in New York"))
```

This will return a dictionary containing the parsed intent and entities of the input message, along with other metadata. You could then pass these results back to your chatbot’s logic for further processing.

## Rasa NLU Training Data Format
The training data should be provided in a .md file, following this structure:

```markdown
version: "2.0"

nlu:
- intent: greet
  examples: |
    - Hello
    - Hi there
    - Hey

- intent: goodbye
  examples: |
    - Bye
    - Goodbye
    - See you around

- intent: affirm
  examples: |
    - Yes
    - Indubitably
    - Exactly

- intent: deny
  examples: |
    - No
    - Not at all
```
Entities can also be defined in the NLU training data. For instance, to define an entity `Restaurant` which is used to extract locations and cuisines from user messages:

```markdown
entities:
- restaurant
  type: unfeaturized
  examples: |
    - [McDonalds](restaurant) in [New York](location)
    - [Pizza Hut](restaurant) in [Los Angeles](location)
```
In the example above, `[McDonalds](restaurant)` and `[New York](location)` are examples of entities defined as `Restaurant` and `Location` respectively. Rasa NLU will learn to recognize these types from user input. Note that you can use synonyms for these entities:

```markdown
synonyms:
- McDonalds: [Mcdonald's, Big Mac]
- Pizza Hut: [Dominoes]
```
This will map `Mcdonald's` to `McDonalds` and so forth. This makes it easier for the model to recognize variations of these names in user messages.

## Additional Resources
Rasa NLU GitHub Repository: https://github.com/RasaHQ/rasa_nlu  
Rasa Documentation: https://rasa.com/docs/rasa/nlu/   
Natural Language Processing with Rasa NLU: https://medium.freecodecamp.org/natural-language-processing-with-rasa-nlu-1c39d0fbd6b2  
Rasa NLU Cross Validation: https://github.com/RasaHQ/rasa_nlu/blob/master/examples/crossvalidation.ipynb 

<phoneme alphabet="ipa" xml:lang="en-US">ˈkʰæt͡ɹiːkəl</phoneme></speak>

For example, if you want to add a classifier named `my_classifier` that uses the NLU data provided in file `data/nlu.md` and `data/nlu2.md`:

```python
config = RasaNLUCrossValidationConfig(folds=5)
data_sources = [
    DataSource("my_classifier", "data/nlu.md"), 
    DataSource("my_classifier", "data/nlu2.md")
]
cross_validation = CrossValidator(config, data_sources)
results = cross_validation.run()
```

The `CrossValidator` class takes a configuration for the folds (k-fold cross validation), and a list of DataSources with their respective names and paths to NLU training files. The results are returned as a dictionary where keys are fold numbers and values are average accuracy, precision, recall, f1_score, confusion matrix etc..

If you want to train the model from scratch instead of cross-validating it:

```python
config = RasaNLUConfig()
trainer = Trainer(config)
training_data = load_data("data/nlu.md")
interpreter = trainer.train(training<｜begin▁of▁sentence｜>
<phoneme alphabet="ipa" xml:lang="en-US">ˈkʰæt͡ɹiːkəl</phoneme></speak>

<｜begin▁of▁sentence｜>
<｜begin▁of▁sentence｜>
<phoneme alphabet="ipa" xml:lang="en-US">ˈkʰæt͡ɹiːkəl</phoneme></speak>

For example, if you want to add a classifier named `my_classifier` that uses the NLU data provided in file `data/nlu.md` and `data/nlu2.md`:

```python
config = RasaNLUCrossValidationConfig(folds=5)
data_sources = [
    DataSource("my_classifier", "data/nlu.md"), 
    DataSource("my_classifier", "data/nlu2.md")
]
cross_validation = CrossValidator(config, data_sources)
results = cross_validation.run()
```

The `CrossValidator` class takes a configuration for the folds (k-fold cross validation), and a list of DataSources with their respective names and paths to NLU training files. The results are returned as a dictionary where keys are fold numbers and values are average accuracy, precision, recall, f1_score, confusion matrix etc..

If you want to train the model from scratch instead of cross-validating it:

```python
config = RasaNLUConfig()
trainer = Trainer(config)
training_data = load_data("data/nlu.md")
interpreter = trainer.train(training_data)
```

In the example above, we first create a configuration for our NLU model and then initialize a `Trainer` with this configuration. The `Trainer` is then used to train an interpreter using data loaded from `"data/nlu.md"`. This trained interpreter can be used to parse user inputs into intent and entities.

For example, if you want to add a classifier named `my_classifier` that uses the NLU data provided in file `data/nlu.md` and `data/nlu2.md`:

```python
config = RasaNLUCrossValidationConfig(folds=5)
data_sources = [
    DataSource("my_classifier", "data/nlu.md"), 
    DataSource("my_classifier", "data/nlu2.md")
]
cross_validation = CrossValidator(config, data_sources)
results = cross_validation.run()
```

The `CrossValidator` class takes a configuration for the folds (k-fold cross validation), and a list of DataSources with their respective names and paths to NLU training files. The results are returned as a dictionary where keys are fold numbers and values are average accuracy, precision, recall, f1_score, confusion matrix etc..

If you want to train the model from scratch instead of cross-validating it:

```python
config = RasaNLUConfig()
trainer = Trainer(config)
training_data = load_data("data/nlu.md")
interpreter = trainer.train(training_data)
```

In the example above, we first create a configuration for our NLU model and then initialize a `Trainer` with this configuration. The `Trainer` is then used to train an interpreter using data loaded from `"data/nlu.md"`. This trained interpreter can be used to parse user inputs into intent and entities.

For example, if you want to add a classifier named `my_classifier` that uses the NLU data provided in file `data/nlu.md` and `data/nlu2.md`:

```python
config = RasaNLUCrossValidationConfig(folds=5)
data_sources = [
    DataSource("my_classifier", "data/nlu.md"), 
    DataSource("my_classifier", "data/nlu2.md")
]
cross_validation = CrossValidator(config, data_sources)
results = cross_validation.run()
```

The `CrossValidator` class takes a configuration for the folds (k-fold cross validation), and a list of DataSources with their respective names and paths to NLU training files. The results are returned as a dictionary where keys are fold numbers and values are average accuracy, precision, recall, f1_score, confusion matrix etc..

If you want to train the model from scratch instead of cross-validating it:

```python
config = RasaNLUConfig()
trainer = Trainer(config)
training_data = load_data("data/nlu.md")
interpreter = trainer.train(training_data)
```

In the example above, we first create a configuration for our NLU model and then initialize a `Trainer` with this configuration. The `Trainer` is then used to train an interpreter using data loaded from `"data/nlu.md"`. This trained interpreter can be used to parse user inputs into intent and entities.


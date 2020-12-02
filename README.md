# Cub3d
Representação 3D em primeira pessoa de um labirinto usando raycasting, semelhante a [Wolfenstein 3D](http://users.atw.hu/wolf3d/) (1992).

<img src="https://github.com/fecoelho/Cub3d/blob/main/Cub3d-screenshot.png" width="800" height="600" />

##ToC
- [Pré-requisitos](#pr--requisitos)
- [Como executar](#como-executar)

<a name="pr--requisitos"></a>
### Pré-requisitos
O projeto é executado usando o MiniLibX, uma versão simplificada do Xlib. Portanto, ele só pode ser executado em Unix

<a name="como-executar"></a>
### Como executar
Bem simples, apenas execute `make` no diretório que clonou e espere terminar.
Depois execute:
```console
> ./cube3D maps/map0.cub
```
E pronto! ✔️ O programa deve executar em sua tela.

##### Você também pode criar uma screenshot da primeira imagem renderizada, basta adicionar um --save no comando de abrir o programa.

```console
> ./cube3D maps/map0.cub --save
```

> ⚠️ Você pode criar mapas para o programa, caso queira saber como, entre em contato.

---
![GitHub top language](https://img.shields.io/github/languages/top/fecoelho/cub3d?color=lightgray) ![Lines of code](https://img.shields.io/tokei/lines/github/fecoelho/cub3d?color=lightgray)

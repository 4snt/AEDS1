"use strict";
class curso {
    canal = null;
    curso = null;
    nome = null;
    constructor(canal, curso, nome) {
        this.canal = canal;
        this.curso = curso;
        this.nome = nome;
    }
}
let c1 = new curso("CFBcursos", "Typescript", "Murilo Santiago");
console.log(c1.canal);
console.log(c1.curso);
console.log(c1.nome);

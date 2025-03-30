CREATE DATABASE pw_bd;
USE pw_bd;

CREATE TABLE usuario (
  idUsuario int primary key auto_increment not null,
  nome varchar(150) not null,
  email varchar(200) not null,
  senha varchar(80) not null
)

select * from usuario;
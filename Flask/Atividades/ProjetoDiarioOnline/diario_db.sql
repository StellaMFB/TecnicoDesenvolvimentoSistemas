CREATE DATABASE diario_db;
USE diario_db;

CREATE TABLE entradas (
	idEntradas int primary key auto_increment, 
    data date not null, 
    nota text not null, 
    sentimento varchar(50) not null
);

INSERT INTO entradas (data, nota, sentimento) VALUES 
('2024-10-22', 'Teste 1', 'feliz'), 
('2024-10-22', 'Teste 2', 'divertido'), 
('2024-10-22', 'Teste 3', 'amando'), 
('2024-10-22', 'Teste 4', 'confuso'), 
('2024-10-22', 'Teste 5', 'triste'), 
('2024-10-22', 'Teste 6', 'medo');
CREATE DATABASE catalogo_db;
USE catalogo_db;

CREATE TABLE filmes (
	idFilme INT PRIMARY KEY AUTO_INCREMENT, 
    titulo VARCHAR(50) NOT NULL, 
    genero VARCHAR(50) NOT NULL, 
    ano INT NOT NULL, 
    CAPA VARCHAR(255)
);

INSERT INTO filmes (titulo, genero, ano, CAPA) VALUES 
('V de Vingança', 'Ficção', '2005', 'v.jpg'), 
('Interestelar', 'Ficção', '2014', 'inter.jpg'), 
('WALL-E', 'Animação', '2008', 'walle.webp'), 
('Ratatouille', 'Animação', '2007', 'rato.webp'), 
('Todo Mundo em Pânico', 'Comédia', '2000', 'panico.jpg'), 
('Debi & Loide - Dois Idiotas em Apuros', 'Comédia', '1994', 'debi.webp');
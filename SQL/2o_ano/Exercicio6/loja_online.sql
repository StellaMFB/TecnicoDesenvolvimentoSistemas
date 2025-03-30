CREATE DATABASE loja_online;
USE loja_online;

CREATE TABLE produtos (
    id_produto INT PRIMARY KEY AUTO_INCREMENT,
    nome_produto VARCHAR(50),
    preco_produto DECIMAL(10, 2),
    estoque_produto INT
);

INSERT INTO produtos (nome_produto, preco_produto, estoque_produto) VALUES 
('melancia', 52.34, 1),
('abóbora', 11.20, 2),
('pitaya', 243.00, 3),
('melão', 67.99, 4),
('amendoim', 12.87, 5),
('brócolis', 30.80, 6),
('laranja', 9.78, 7),
('maçã', 1.99, 8),
('mirtilo', 300.99, 9),
('cenoura', 27.00, 10),
('abacaxi', 10.66, 11),
('mamão', 29.90, 12),
('kiwi', 186.09, 13),
('banana', 21.63, 14),
('couve-flor', 47.92, 15);

SELECT nome_produto, preco_produto,
    IF (estoque_produto > 5, 'Em estoque', 'Fora de estoque') AS resultado_estoque FROM produtos;

SELECT nome_produto, preco_produto,
    IF (preco_produto > 100.00, 'Desconto de 10%', 'Preço original') AS resultado_desconto FROM produtos;

SELECT nome_produto, preco_produto,
    CASE
        WHEN preco_produto <= 40.00 THEN 'Baixo preço'
        WHEN preco_produto <= 100.00 THEN 'Medio preço'
        ELSE 'Alto preço'
    END AS classificacao
    FROM produtos;

SELECT nome_produto, preco_produto,
    IF (preco_produto > 200.00, 'Frete grátis', preco_produto * 0.1) AS frete_produto FROM produtos;

CREATE database CARDAPIO;
SHOW DATABASES;

use CARDAPIO;
SHOW TABLES;
DROP TABLE TAMANHO;


CREATE TABLE TAMANHO(
CODPROD INT AUTO_INCREMENT  ,TAMANHO VARCHAR(10), PRIMARY KEY (CODPROD));

CREATE TABLE SABORES (
CODPROD INT AUTO_INCREMENT,SABORES VARCHAR(80), PRIMARY KEY (CODPROD));  

CREATE TABLE OPCIONAIS (
CODPROD INT AUTO_INCREMENT,OPCIONAIS VARCHAR(80), PRIMARY KEY (CODPROD));  

CREATE TABLE BEBIDAS (
CODPROD INT AUTO_INCREMENT,BEBIDAS VARCHAR(80), PRIMARY KEY (CODPROD)); 

CREATE TABLE pedidos (
CODPROD INT AUTO_INCREMENT,pedidos VARCHAR(800), PRIMARY KEY (CODPROD)); 

SELECT * FROM TAMANHO;
DELETE FROM BEBIDAS WHERE(CODPROD=?);

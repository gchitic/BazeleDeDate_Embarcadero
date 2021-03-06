SELECT * FROM PRODUSE WHERE 
 DENUMIRE = 'Lapte'


CREATE FUNCTION ID_FACTURA()
RETURNS INT
AS
BEGIN
	RETURN (SELECT @@IDENTITY)
END;	--RETURNEAZA ID-UL CHEII PRIMARE



ALTER PROCEDURE FACTURA @D DATE, @N VARCHAR(20), @E varchar(100)
AS 
	INSERT INTO FACTURA_REC(NR_FACTURA,DATA_FACTURA,EMITENT) VALUES(@N,@D,@E)
	RETURN (SELECT DBO.ID_FACTURA());


EXEC FACTURA @N='XXX',@D='2021-12-01'

--INSERTURI
INSERT INTO RECEPTIE(PRODUSE_ID,UNIT_MASURA_ID,FACTURA_REC_ID,OPERATOR_ID,
					STOCK1,STOCK2,PRET_INTRARE,PRET_VANZARE)
VALUES (:PRODUSE_ID,:UNIT_MASURA_ID,:FACTURA_REC_ID,:OPERATOR_ID,
					:STOCK1,:STOCK2,:PRET_INTRARE,:PRET_VANZARE)

INSERT INTO PRODUSE(DENUMIRE,COD_PRODUS)
VALUES (:DENUMIRE,:COD_PRODUS)


--SELECTURI
select * from produse

SELECT FR.*,R.*,OP.NUME+' '+OP.PRENUME AS OPERATOR,P.DENUMIRE AS PRODUS,P.COD_PRODUS,UM.ABREVIERE 
FROM FACTURA_REC FR INNER JOIN RECEPTIE R ON R.FACTURA_REC_ID=FR.FACTURA_REC_ID
					INNER JOIN UNIT_MASURA UM ON UM.UNIT_MASURA_ID=R.UNIT_MASURA_ID
					INNER JOIN OPERATOR OP ON OP.OPERATOR_ID=R.OPERATOR_ID
					INNER JOIN PRODUSE P ON P.PRODUSE_ID=R.PRODUSE_ID
WHERE FR.FACTURA_REC_ID=:FACTURA_REC_ID 


SELECT FR.* , R.* , V.* , C.* , OP.NUME+' '+OP.PRENUME AS OPERATOR,P.DENUMIRE AS PRODUS , P.COD_PRODUS , UM.ABREVIERE,
		CL.NUME+' '+CL.PRENUME AS CLIENT , D.NUME AS DISC , D.VALOAREA
FROM FACTURA_REC FR INNER JOIN RECEPTIE R ON R.FACTURA_REC_ID=FR.FACTURA_REC_ID
					INNER JOIN UNIT_MASURA UM ON UM.UNIT_MASURA_ID=R.UNIT_MASURA_ID
					INNER JOIN OPERATOR OP ON OP.OPERATOR_ID=R.OPERATOR_ID
					INNER JOIN PRODUSE P ON P.PRODUSE_ID=R.PRODUSE_ID
					INNER JOIN VANZARE V ON V.RECEPTIE_ID=R.RECEPTIE_ID
					INNER JOIN CEC C ON C.CEC_ID=V.CEC_ID
					INNER JOIN CLIENT CL ON CL.CLIENT_ID=C.CLIENT_ID
					INNER JOIN DISCOUNT D ON D.DISCOUNT_ID=CL.DISCOUNT_ID
WHERE C.CEC_ID=:CEC_ID

CREATE PROCEDURE CEK @OPER INT,@CLIENT INT,@FIRMA INT
AS
	INSERT INTO CEC(OPERATOR,CLIENT_ID,FIRMA_ID)
	VALUES(@OPER,@CLIENT,@FIRMA)
RETURN (SELECT @@IDENTITY);

INSERT INTO DISCOUNT(NUME,VALOAREA,ACTIV)
VALUES	('',0,1),
		('DEPUTAT',40,1),
		('ANIVERSAR',3,1),
		('INCEPATOR',1,1),
		('SOCIAL',2,1)

delete CLIENT WHERE CLIENT_ID >=1 

INSERT INTO CLIENT(DISCOUNT_ID,NUME,PRENUME,DATA_NAST,DATA_REG,COD_CLIENT)
VALUES(5,'','','','2020-04-23',''),
		(5,'MORARI','ALEXANDRA','2000-05-12','2020-04-23','123133'),
		(5,'VOICU','MARIN','1999-01-04','2020-04-23','23423')

UPDATE CLIENT SET DISCOUNT_ID=9 WHERE CLIENT_ID = 5

INSERT INTO VANZARE (CEC_ID,RECEPTIE_ID,CANTITATE,SUMA,SUMA_DISCOUNT,SUMA_TOTAL)
VALUES (:CEC_ID,:RECEPTIE_ID,:CANTITATE,:SUMA,:SUMA_DISCOUNT,:SUMA_TOTAL)

--insereaza clienti

SELECT V.VANZARE_ID 
FROM VANZARE V INNER JOIN RECEPTIE R ON R.RECEPTIE_ID=V.RECEPTIE_ID
				INNER JOIN PRODUSE P ON P.PRODUSE_ID = R.PRODUSE_ID 
WHERE P.COD_PRODUS=:COD_PRODUS AND V.CEC_ID=:CEC_ID


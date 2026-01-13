## Registro de cuenta
1. Introducir datos válidos pero no seleccionar "Crear cuenta"
	1. El server se desconecta de la red
	2. El cliente selecciona "Crear cuenta"
	3. El cliente debe informar al jugador que no se pudo conectar al servidor
	4. El server se reconecta a la red
	5. El cliente selecciona "Crear cuenta" con los mismos datos
	6. El cliente debe informar que se creó la cuenta
	7. Iniciar sesión con la cuenta creada
2. Introducir datos válidos pero no seleccionar "Crear cuenta"
	1. El servidor apaga el servicio de SQL Server
	2. El cliente selecciona "Crear cuenta"
	3. El cliente debe informar al jugador que no se pudo conectar al servidor
	4. El servidor enciende el servidio de SQL Server
	5. El cliente selecciona "Crear cuenta" con los mismos datos
	6. El cliente debe informar que se creó la cuenta
	7. Iniciar sesión con la cuenta creada
3. Entrar al lobby
	1. Desconectar al cliente de la red
	2. Escribir algo en el chat
	3. (Debe estar manejada la excepción del timeout)
4. Diferencias host
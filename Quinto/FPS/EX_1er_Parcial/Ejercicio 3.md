
| #    | Límite a Probar (inferior o superior) | Valor del Límite (n) | Valor de la Prueba (min, nom, max, min-, min+, max- o max+) | Condición de la Prueba (Descripción)                        | Comportamiento Esperado       |
| ---- | ------------------------------------- | -------------------- | ----------------------------------------------------------- | ----------------------------------------------------------- | ----------------------------- |
| CP01 | Inferior                              | 8                    | min                                                         | La contraseña **sí** es aceptada porque contraseña ≥ 8      | La contraseña es **válida**   |
| CP02 | Inferior                              | 7                    | min-                                                        | La contraseña **no** es aceptada porque contraseña < 8      | La contraseña es **inválida** |
| CP03 | Inferior                              | 9                    | min+                                                        | La contraseña **sí** es aceptada porque contraseña ≥ 8      | La conraseña es **válida**    |
| CP04 | Normal                                | 12                   | nom                                                         | La contraseña **sí** es aceptada porque 8 ≤ contraseña ≤ 15 | La contraseña es **válida**   |
| CP05 | Superior                              | 15                   | max                                                         | La contraseña **sí** es aceptada porque contraseña ≤ 15     | La contraseña es **válida**   |
| CP06 | Superior                              | 14                   | max-                                                        | La contraseña **sí** es aceptada porque contraseña ≤ 15     | La contraseña es **válida**   |
| CP07 | Superior                              | 16                   | max+                                                        | La contraseña **no** es aceptada porque contraseña > 15     | La contraseña es **inválida** |

<div class="page-break" style="page-break-before: always;"></div>

### ¿Qué ventajas representa realizar pruebas que validen de manera más rigurosa el cumplimiento funcional de un software? Indique al menos 5 ventajas, contemplando el punto de vista del producto, del proceso y de la satisfacción del cliente.
Cuando tenemos que probar una funcionalidad con límites específicos que se necesitan para aprobar una regla de negocio o un requisito que tenga un alto impacto en la seguridad o economía del negocio las pruebas más rigurosas son una mejor opción porque nos aseguramos que los límites estén bien manejados y que no hay errores en estos mismos por algun signo condicional mal usado.
Esto nos brinda ciertas ventajas como:
- Errores en los límites mitigados
	- Es común que los errores se presenten en los límites de los rangos de entrada o salida
- Se le brinda seguridad al stakeholder que el sistema funciona de acuerdo a las reglas de negocio
	- Si es una condición delicada, como en un sistema médico que de cierta dosis respondiendo a los signos de un paciente es muy importante que los límites estén bien marcados y el software responda correctamente a ellos
	- Si se cumplen las reglas de negocio y las necesidades del stakeholder tenemos un buen producto
- Aumentamos el área de prueba
	- Entre más casos probemos (justificados y bien definidos) es mejor porque aumentamos nuestra cobertura de pruebas y así podemos detectar más errores
- El software es más robusto
	- Un software con más pruebas y bien hechas mejora su mantenibilidad, confiabilidad y seguridad
- Son pruebas automatizables
	- Este tipo de pruebas se pueden automatizar lo que nos hace este proceso eficaz y eficiente
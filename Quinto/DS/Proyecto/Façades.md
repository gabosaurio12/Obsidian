## HuespedFacade
- List(Hotel) GetHotelesCiudad(String: ciudad)
- List(Habitacion) GetHabitacionesDisponibles(Date: FechaCheckIn, Date: FechaCheckOut)
- List(Servicio) GetServiciosDisponibles(Int: hotelID)
- List(Producto) GetProductosDisponibles(Int: productoID)
- void ReservarHabitacionPorID(Int: habitacionID)
- void CancelarReservacionHabitacionPorID(Int: HabitacionID)
int main() {
    int hora_entrada, minuto_entrada, hora_saida, minuto_saida;
    int total_minutos_entrada, total_minutos_saida;
    int duracao_horas, duracao_minutos;

    printf("Hora de entrada (hh mm): ");
    scanf("%d %d", &hora_entrada, &minuto_entrada);

    printf("Hora de saída (hh mm): ");
    scanf("%d %d", &hora_saida, &minuto_saida);

    total_minutos_entrada = hora_entrada * 60 + minuto_entrada;
    total_minutos_saida = hora_saida * 60 + minuto_saida;

    duracao_minutos = total_minutos_saida - total_minutos_entrada;

    duracao_horas = duracao_minutos / 60;
    duracao_minutos = duracao_minutos % 60;

    printf("Duração: %d horas %d minutos\n", duracao_horas, duracao_minutos);

    return 0;
}
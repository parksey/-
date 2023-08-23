package menu

import controller.Controller
import model.FoodData
import view.InputView
import view.OutputView

fun main() {
    val inputView = InputView()
    val outputView = OutputView()
    val controller = Controller(inputView, outputView)
    controller.start()
}
